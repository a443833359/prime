CC=gcc
CFLAGS= -Wall -pipe -O2

all:main.o isprime.o prime.o
	${CC} ${CFLAGS} main.o isprime.o prime.o -o prime
main.o:main.c
	${CC} ${CFLAGS} -c -o main.o main.c
isprime.o:isprime.c
	${CC} ${CFLAGS} -c -o isprime.o isprime.c
prime.o:prime.c
	${CC} ${CFLAGS} -c -o prime.o prime.c
clean:
	rm -rf main.o prime.o isprime.o prime
