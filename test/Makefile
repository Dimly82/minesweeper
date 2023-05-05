CC = gcc

all: main
	main.exe

main: runTest fieldTest interactionTest errorTest main.o
	${CC} -o main.exe main.o -L../field -L../field/fieldTest -L../run -L../run/runTest -L../interaction -L../interaction/Tests -L../error -L../error/errorTest -lfieldTest -linteractionTests -lerrorTest -lrunTest -lfield -lrun -linteraction -lcheckErr

main.o: main.c
	${CC} -c main.c -I../field/fieldTest -I../run/runTest -I../interaction/Tests -I../error/errorTest -I../run -I../field -I../error -I../interaction

runTest:
	$(MAKE) -C ../run/runTest all

fieldTest:
	$(MAKE) -C ../field/fieldTest all

interactionTest:
	$(MAKE) -C ../interaction/Tests all

errorTest:
	$(MAKE) -C ../error/errorTest all
