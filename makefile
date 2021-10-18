all: main.o linkedlist.o tests.o
	gcc -o main.out main.o linkedlist.o

main.o: main.c linkedlist.h tests.o
	gcc -c main.c

tests.o: linkedlist.h
	gcc -c tests.c

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

run:
	./main.out

comprun: all
	./main.out

clean:
	rm *.o
	rm main.out
