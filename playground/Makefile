CC=clang
RM=rm -f
CFLAGS=-g -ffast-math -std=c11 -pedantic -Wall -Wextra -funsigned-char
LDFLAGS=
LDLIBS=../lib.a

SRCS=$(wildcard *.c)
BINS=$(basename $(SRCS))
OBJS=$(subst .c,.o,$(SRCS))

all: all
	$(MAKE) -C ../ -B -j8
	$(MAKE) $(BINS) -B -j8

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CC) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS) *.o $(BINS)

dist-clean: clean
	$(RM) *~ .dependtool

include .depend
