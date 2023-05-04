CC = gcc

all: main
	main.exe

main: runTest fieldTest interactionTest errorTest main.o
	${CC} -o main.exe main.o -L../field -L../field/fieldTest -L../run -L../run/runTest -L../interaction -L../interaction/Tests -L../error -L../error/errorTest -lfieldTest -lfield -linteractionTests -linteraction -lerrorTest -lcheckErr -lrunTest -lrun

main.o: main.c
	${CC} -c main.c -I../field -I../field/fieldTest -I../run -I../run/runTest -I../interaction -I../interaction/Tests -I../error -I../error/errorTest

runTest:
	$(MAKE) -C ../run/runTest all

fieldTest:
	$(MAKE) -C ../field/fieldTest all

interactionTest:
	$(MAKE) -C ../interaction/Tests all

errorTest:
	$(MAKE) -C ../error/errorTest all
