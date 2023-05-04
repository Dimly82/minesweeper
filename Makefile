TARGET = minesweeper.exe
CC = gcc

all: main.o tests
	${CC} -o ./bin/${TARGET} main.o -L./field -L./run -L./error -L./interaction -lfield -lrun -lcheckErr -linteraction
	mingw32-make clean

tests:
	$(MAKE) -C ./test all

main.o : main.c
	${CC} -c main.c

clean:
	del .\*.o .\run\*.o .\run\runTest\*.o .\error\*.o .\error\errorTest\*.o .\field\*.o .\field\fieldTest\*.o .\interaction\*.o .\interaction\Tests\*.o .\test\*.o