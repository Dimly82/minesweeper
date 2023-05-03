TARGET = minesweeper.exe
CC = gcc

all:
	cd ./run && mingw32-make && cd ../field && mingw32-make && cd ../interaction && mingw32-make && cd ../error && mingw32-make && cd ../ && ${CC} -o ./bin/${TARGET} main.o ./run/run.o ./field/field.o ./interaction/interaction.o ./error/checkErr.o -lwinmm && mingw32-make clean


main.o : main.c
	${CC} -c main.c

clean:
	del .\*.o .\run\*.o .\run\runTest\*.o .\error\*.o .\error\errorTest\*.o .\field\*.o .\field\fieldTest\*.o .\interaction\*.o .\interaction\Tests\*.o