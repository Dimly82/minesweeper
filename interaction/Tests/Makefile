CC=gcc

all: interactionTests.c interaction.o interactionTests.a
	${CC} -c interactionTests.c

interaction.o:
	$(MAKE) -C ../ all

interactionTests.a: interactionTests.o
	ar rcs libinteractionTests.a interactionTests.o