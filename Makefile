.PHONY: build clean run 

default: build run

build:
	cc src/main.c src/core/*.c -o output.out

clear:
	rm *.o output.out

run:
	./output.out