all: main.o linkedlist.o
	gcc -o main.out main.o linkedlist.o

main.o: main.c linkedlist.o
	gcc -c main.c

linkedlist.o: linkedlist.c linkedlist.o
	gcc -c linkedlist.c

run:
	./main.out

comprun: all
	./main.out

clean:
	rm *.o
	rm main.out
