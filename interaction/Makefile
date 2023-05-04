CC = gcc

all: interaction.o interaction.a

interaction.o: interaction.c
	${CC} -c interaction.c

interaction.a: interaction.o
	ar rcs libinteraction.a interaction.o