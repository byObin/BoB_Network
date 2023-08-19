CC=gcc
CFLAGS=-Wall
LDFLAGS=-lnetfilter_queue

all: netfilter_test

netfilter_test: netfilter_test.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f netfilter_test

