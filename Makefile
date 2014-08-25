CC=gcc
RM=rm -f
CFLAGS=-ffast-math -Ofast -std=c99 -pedantic -Wall -Wextra
LDFLAGS=
#LDLIBS=-lpthread

BIN=interpret
SRCS=system.c dummy.c interpret.c
SRCS=$(wildcard *.c)
OBJS=$(subst .c,.o,$(SRCS))

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(LDFLAGS) -o $(BIN) $(OBJS) $(LDLIBS)

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CC) $(CFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS) *.o

dist-clean: clean
	$(RM) *~ .dependtool

include .depend
