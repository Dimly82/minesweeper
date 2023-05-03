CC = gcc

errorTest.exe: main.o errorTest.o ../checkErr.o
	${CC} -o ../../test/errorTest.exe main.o errorTest.o ../checkErr.o

main.o: main.c
	${CC} -c main.c

errorTest.o: errorTest.c
	${CC} -c errorTest.c

error.o:
	cd ../ && mingw32-make error.o