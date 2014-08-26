CC=gcc
RM=rm -f
CFLAGS=-g -ffast-math -Ofast -std=c99 -pedantic -Wall -Wextra
LDFLAGS=
#LDLIBS=-lpthread

BIN=interpret
SRCS=$(wildcard *.c)
OBJS=$(subst .c,.o,$(SRCS))

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
	$(MAKE) -C unit_tests

clean:
	$(RM) *.o *.a $(BIN) core*
	$(MAKE) -C unit_tests clean

dist-clean: clean
	$(RM) *~ .dependtool

include .depend
