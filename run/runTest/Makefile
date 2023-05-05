CC = gcc

all: run.o runTest.a

runTest.o: runTest.c
	${CC} -c runTest.c -I../

run.o:
	$(MAKE) -C ../ all

runTest.a: runTest.o
	ar rcs librunTest.a runTest.o