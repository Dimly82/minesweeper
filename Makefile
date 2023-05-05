TARGET = minesweeper.exe
CC = gcc

all: main.o tests
	${CC} -o ./bin/${TARGET} main.o -L./run -lrun -L./error -lcheckErr -L./interaction -linteraction -L./field -lfield
	mingw32-make clean

tests:
	$(MAKE) -C ./test all

main.o : main.c
	${CC} -c main.c

clean:
	del .\*.o .\run\*.o .\run\runTest\*.o .\error\*.o .\error\errorTest\*.o .\field\*.o .\field\fieldTest\*.o .\interaction\*.o .\interaction\Tests\*.o .\test\*.o