ifneq ($(wildcard /usr/local/bin/gcc-4.9),)
	CC=gcc-4.9
else
	CC=clang
endif

RM=rm -f
CFLAGS= -std=c11 -Ofast -pedantic -Wall -Wextra -funsigned-char
LDFLAGS=
LDLIBS=

# Uncomment for release
RELEASE:=1

ifeq ($(RELEASE),1)
	# Release
	CFLAGS+=-DNDEBUG
	LDLIBS+=-s # Strip binary
else
	# Debug
	CFLAGS+=-g -fstack-protector-all
endif

BIN=ifj
SRCS=$(wildcard *.c)
OBJS=$(subst .c,.o,$(SRCS))

LEADER_NAME=xmikus15

all: $(BIN)

zip:
	rm $(LEADER_NAME).zip || true
	cp docs/dokumentace.pdf dokumentace.pdf
	zip $(LEADER_NAME).zip *.c *.h Makefile rozdeleni rozsireni dokumentace.pdf
	rm dokumentace.pdf

$(BIN): $(OBJS) lib.a
	$(CC) $(LDFLAGS) -o $(BIN) $(BIN).o lib.a $(LDLIBS)

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CC) -MM $^>>./.depend;

.PHONY: test

lib.a: $(filter-out $(BIN).o, $(OBJS))
	ar -rcs $@ $(filter-out $(BIN).o, $(OBJS))

playground: all
	test -d "playground" && $(MAKE) -C playground || true

test: all
	test -d "unit_tests" && $(MAKE) -C unit_tests || true

clean:
	$(RM) *.o *.a $(BIN) core* *.zip

	# Must be true at the end, because make clean fails unsuccessfully
	test -d "unit_tests" && $(MAKE) -C unit_tests clean || true
	test -d "playground" && $(MAKE) -C playground clean || true

dist-clean: clean
	$(RM) *~ .dependtool

#
# IFJ 2014/2015 Test Makefie
#
# Stanislav Nechutný - xnechu01
#

TESTFILES=$(patsubst tests/%.pas, tests/%, $(shell ls tests/*.pas));



tests: ifj $(TESTFILES)
	# Done

tests/%: tests/%.pas
	@echo -e "\n"
	-$(shell valgrind ./ifj $< < $@.stdin > /dev/null 2> $@.valgrind.real; if [ $$(grep "ERROR SUMMARY: 0 errors from 0 contexts" $@.valgrind.real | wc -l) = "1" ]; then rm $@.valgrind.real; else /bin/echo -e "#"; grep "ERROR SUMMARY:" $@.valgrind.real;  fi;  )
	-$(shell ./ifj $< > $@.stdout.real 2> $@.stderr.real < $@.stdin;echo "$$?" > $@.exit.real;diff $@.stdout.real $@.stdout.correct > /dev/null;if [ "$$?" = "0" ]; then diff $@.exit.real $@.exit.correct > /dev/null; if [ "$$?" = "0" ]; then echo "# OK ... $@"; rm $@.stdout.real $@.stderr.real $@.exit.real; else echo "# ERROR ... $@"; fi; else echo "# ERROR ... $@"; fi)

sandwich:
	-$(shell if [[ $$(whoami) == "root" ]] ; then echo "# Yes, my lord."; else echo "# You are not root!"; fi)



include .depend
