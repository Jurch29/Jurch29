all: strProject

strProject: test.o main.o
	gcc -o test test.o main.o

test.o: test.c
	gcc -o test.o -c test.c -W -Wall -ansi -pedantic

main.o: main.c test.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o

mrproper: clean
	rm -rf test