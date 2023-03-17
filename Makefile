TARGET = minesweeper.exe
CC = gcc

${TARGET} : main.o field.o
	${CC} -o .\bin\${TARGET} ./obj/main.o .\obj\field.o

main.o : main.c
	${CC} -c main.c -o ./obj/main.o

field.o : .\field/field.c
	${CC} -c .\field/field.c -o .\obj\field.o

clean:
	del .\obj\*.o ${TARGET}