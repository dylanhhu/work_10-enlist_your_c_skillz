all: main.o linkedlist.o
	gcc -o main.out main.o linkedlist.o

main.o: main.c linkedlist.h
	gcc -c main.c

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

run:
	./main.out

comprun: all
	./main.out

clean:
	rm *.o
	rm main.out
