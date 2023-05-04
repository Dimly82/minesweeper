CC = gcc

all: checkErr.o error.a

checkErr.o : checkErr.c
	${CC} -c checkErr.c

error.a : checkErr.o
	ar rcs libcheckErr.a checkErr.o