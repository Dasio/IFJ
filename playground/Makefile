CC=gcc
RM=rm -f
CFLAGS=-g -ffast-math -std=c11 -pedantic -Wall -Wextra
LDFLAGS=
LDLIBS=../lib.a

SRCS=$(wildcard *.c)
BINS=$(basename $(SRCS))
OBJS=$(subst .c,.o,$(SRCS))

all: $(BINS)

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CC) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS) *.o $(BINS)

dist-clean: clean
	$(RM) *~ .dependtool

include .depend
