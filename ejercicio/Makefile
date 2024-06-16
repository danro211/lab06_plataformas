CC=gcc
CFLAGS=-I.

all: main

main: main.o stack.o
	$(CC) -o main main.o stack.o

main.o: main.c
	$(CC) -c main.c $(CFLAGS)

stack.o: stack.c
	$(CC) -c stack.c $(CFLAGS)

clean:
	rm -f *.o main
