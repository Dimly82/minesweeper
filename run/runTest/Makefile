CC = gcc

runTest: main.o runTest.o ../run.o
	${CC} -o runTest.exe main.o runTest.o ../run.o

main.o: main.c
	${CC} -c main.c

runTest.o: runTest.c
	${CC} -c runTest.c

run.o:
	cd ../	&& mingw32-make run.o