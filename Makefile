CC=gcc
RM=rm -f
CFLAGS=-g -ffast-math -Ofast -std=c11 -pedantic -Wall -Wextra
LDFLAGS=
#LDLIBS=-lpthread

BIN=interpret
SRCS=$(wildcard *.c)
OBJS=$(subst .c,.o,$(SRCS))
TEST_FILES=$(wildcard ./unit_tests/test*.c)
TEST_SRCS=string.c

all: $(BIN)

$(BIN): $(OBJS) lib.a
	$(CC) $(LDFLAGS) -o $(BIN) interpret.o lib.a $(LDLIBS)

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CC) -MM $^>>./.depend;

.PHONY: test

lib.a: $(filter-out interpret.o, $(wildcard *.o))
	ar -rcs $@ $(filter-out interpret.o, $(OBJS))

test: all
	$(MAKE) -C unit_tests -B

testx: $(TEST_FILES) $(TEST_SRCS)
	$(CC) $(CFLAGS) $(TEST_FILES) $(TEST_SRCS) -o test

clean:
	$(RM) *.o *.a $(BIN) core*
	$(MAKE) -C unit_tests clean

dist-clean: clean
	$(RM) *~ .dependtool

include .depend
