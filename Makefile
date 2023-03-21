TARGET = minesweeper.exe
CC = gcc

${TARGET} : main.o field.o interaction.o
	${CC} -o .\bin\${TARGET} .\obj\main.o .\obj\field.o .\obj\interaction.o

main.o : main.c
	${CC} -c main.c -o ./obj/main.o

field.o : .\field\field.c
	${CC} -c .\field\field.c -o .\obj\field.o

interaction.o :
	${CC} -c .\interaction\interaction.c -o .\obj\interaction.o

clean:
	del .\obj\*.o ${TARGET}