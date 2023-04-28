CC = gcc

errorTest.exe: main.o errorTest.o ../checkErr.o
	${CC} -o errorTest.exe main.o errorTest.o ../checkErr.o ../../interaction/interaction.o

main.o: main.c
	${CC} -c main.c

errorTest.o: errorTest.c
	${CC} -c errorTest.c

error.o:
	cd ../; make error.o