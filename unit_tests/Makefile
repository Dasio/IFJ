CC=gcc
RM=rm -f
CFLAGS=-g -ffast-math -Ofast -std=c99 -pedantic -Wall -Wextra
LDFLAGS=
LDLIBS=../lib.a


SRCS=$(wildcard *.c)
BINS=$(basename $(SRCS))
OBJS=$(subst .c,.o,$(SRCS))

run_all: $(BINS)

clean:
	$(RM) $(OBJS) *.o $(BINS)

dist-clean: clean
	$(RM) *~ .dependtool
