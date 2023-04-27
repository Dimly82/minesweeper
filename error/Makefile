CC = gcc

checkErr.o : checkErr.c
	${CC} -c checkErr.c -o checkErr.o

error : checkErr.o
	ar rcs checkErr.a checkErr.o