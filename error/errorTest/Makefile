CC = gcc

all: error.o errorTest.a

errorTest.o: errorTest.c
	${CC} -c errorTest.c

error.o:
	$(MAKE) -C ../ all

errorTest.a: errorTest.o
	ar rcs liberrorTest.a errorTest.o