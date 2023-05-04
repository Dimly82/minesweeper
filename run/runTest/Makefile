CC = gcc

all: runTest.c run.o runTest.a
	${CC} -c runTest.c

run.o:
	$(MAKE) -C ../

runTest.a: runTest.o
	ar rcs librunTest.a runTest.o