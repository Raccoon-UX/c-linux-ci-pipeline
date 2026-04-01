all:
	gcc -o main main.c

test:
	gcc -o test main.c test.c
	./test
