CC = gcc

all: errorTest.c error.o errorTest.a
	${CC} -c errorTest.c

error.o:
	$(MAKE) -C ../ all

errorTest.a: errorTest.o
	ar rcs liberrorTest.a errorTest.o