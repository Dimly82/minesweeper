TARGET = minesweeper.exe
CC = gcc

all: main.o
	cd ./test && mingw32-make all && ${CC} -o ./bin/${TARGET} main.o ./run/run.o ./field/field.o ./interaction/interaction.o ./error/checkErr.o -lwinmm && mingw32-make clean


main.o : main.c
	${CC} -c main.c

clean:
	del .\*.o .\run\*.o .\run\runTest\*.o .\error\*.o .\error\errorTest\*.o .\field\*.o .\field\fieldTest\*.o .\interaction\*.o .\interaction\Tests\*.o