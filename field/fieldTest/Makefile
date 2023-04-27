CC = gcc

fieldTest: main.o fieldTest.o ../field.o
	${CC} -o fieldTest.exe main.o fieldTest.o ../field.o

main.o: main.c
	${CC} -c main.c

fieldTest.o: fieldTest.c
	${CC} -c fieldTest.c

field.o:
	cd ../; make field.o