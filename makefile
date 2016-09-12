#!/bin/make

CC=gcc

all: build

run:
	./primer 5

clean:
	rm -rf *.o

debug:
	$(CC) primer.c -g -o $(OUTPUT)
	gdb primer

build:
	$(CC) primer.c -o primer $(CFLAGS)
