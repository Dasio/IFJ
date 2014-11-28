CC=clang
RM=rm -f
CFLAGS=-g -ffast-math -Ofast -std=c11 -pedantic -Wall -Wextra -funsigned-char
LDFLAGS=
LDLIBS=../lib.a

TEST_SRCS=$(wildcard test_*.c)

all: test

test: $(TEST_SRCS)
	$(CC) $(CFLAGS) test.c $(TEST_SRCS) ../lib.a -o test

clean:
	$(RM) $(OBJS) *.o test

dist-clean: clean
	$(RM) *~ .dependtool
