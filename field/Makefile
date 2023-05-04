CC = gcc

all: field.o field.a

field.o : field.c
	${CC} -c field.c

field.a : field.o
	ar rcs libfield.a field.o