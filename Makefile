GCC = gcc

all: zumbi

zumbi: main.c
	gcc -pthread -o zumbi main.c -W -Wall -ansi -pedantic

.PHONY: clean run

run:
	./zumbi

clean:
	rm -rf zumbi