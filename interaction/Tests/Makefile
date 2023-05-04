CC=gcc

all: interaction.o interactionTests.a

interactionTests.o: interactionTests.c
	${CC} -c interactionTests.c

interaction.o:
	$(MAKE) -C ../ all

interactionTests.a: interactionTests.o
	ar rcs libinteractionTests.a interactionTests.o