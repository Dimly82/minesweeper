TARGET = minesweeper.exe
CC = gcc

${TARGET} : main.o ./field/field.o ./interaction/interaction.o ./error/checkErr.o
	${CC} -o ./bin/${TARGET} main.o ./field/field.o ./interaction/interaction.o ./error/checkErr.o -lwinmm

main.o : main.c
	${CC} -c main.c

clean:
	del ./obj/*.o ${TARGET}