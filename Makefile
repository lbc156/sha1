main: main.o sha1.o 
	gcc -o main main.o sha1.o
main.o: main.c sha1.h
	gcc -c main.c  
sha1.o: sha1.c sha1.h  
	gcc -c sha1.c