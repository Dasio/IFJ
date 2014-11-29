ifneq ($(wildcard /usr/local/bin/gcc-4.9),)
	CC=gcc-4.9
else
	CC=clang
endif

RM=rm -f
CFLAGS=-g -ffast-math -Ofast -std=c11 -pedantic -Wall -Wextra -ftrapv -fstack-protector-all -funsigned-char
LDFLAGS=
LDLIBS=

BIN=ifj
SRCS=$(wildcard *.c)
OBJS=$(subst .c,.o,$(SRCS))

LEADER_NAME=xmikus15

all: $(BIN)

release: all
	zip $(LEADER_NAME).zip *.c *.h Makefile .depend README.md

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

include .depend
