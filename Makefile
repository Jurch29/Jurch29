all: strProject

strProject: test.o main.o strFunc.o
	gcc -o test test.o main.o strFunc.o

test.o: test.c test.h strFunc.h
	gcc -o test.o -c test.c -W -Wall -pedantic

strFunc.o : strFunc.c strFunc.h
	gcc -o strFunc.o -c strFunc.c -W -Wall -pedantic

main.o: main.c test.h
	gcc -o main.o -c main.c -W -Wall -pedantic

clean:
	rm -rf *.o

mrproper: clean
	rm -rf test