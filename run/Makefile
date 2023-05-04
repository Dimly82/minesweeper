CC = gcc

all: run.o run.a

run.o : run.c
	${CC} -c run.c

run.a : run.o
	ar rcs librun.a run.o