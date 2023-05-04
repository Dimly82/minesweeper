CC=gcc

interactionTests : main.o interactionTests.o ../interaction.o
	${CC} -o main.exe main.o interactionTests.o ../interaction.o

main.o: main.c
	${CC} -c main.c

interactionTests.o: interactionTests.c
	${CC} -c interactionTests.c

interaction.o:
	cd ../ && make interaction.o