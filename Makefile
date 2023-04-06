TARGET = minesweeper.exe
CC = gcc

${TARGET} : main.o field.o interaction.o checkErr.o
	${CC} -o ./bin/${TARGET} ./obj/main.o ./obj/field.o ./obj/interaction.o ./obj/checkErr.o

main.o : main.c
	${CC} -c main.c -o ./obj/main.o

field.o : ./field/field.c
	${CC} -c ./field/field.c -o ./obj/field.o

interaction.o : ./interaction/interaction.c
	${CC} -c ./interaction/interaction.c -o ./obj/interaction.o

checkErr.o : ./error/checkErr.c
	${CC} -c ./error/checkErr.c -o ./obj/checkErr.o

field : field.o
	ar rcs ./field/field.a ./obj/field.o

interaction : interaction.o
	ar rcs ./interaction/interaction.a ./obj/interaction.o

error : checkErr.o
	ar rcs ./error/checkErr.a ./obj/checkErr.o

clean:
	del ./obj/*.o ${TARGET}