#!/bin/make

CC=gcc
CFLAGS=-Wall -std=gnu99
OUTPUT=primer

all: build

clean:
    rm -rf *.o
    
build: primer.o
    $(CC) primer.o -o $(OUTPUT)

primer.o:
    $(CC) -c primer.c $(CFLAGS)
