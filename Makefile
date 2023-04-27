TARGET = minesweeper.exe
CC = gcc

${TARGET} : main.o field.o interaction.o checkErr.o
	${CC} -o ./bin/${TARGET} ./obj/main.o ./obj/field.o ./obj/interaction.o ./obj/checkErr.o -lwinmm

main.o : main.c
	${CC} -c main.c -o ./obj/main.o

clean:
	del ./obj/*.o ${TARGET}