CC = gcc

all: field.o fieldTest.a

fieldTest.o: fieldTest.c
	${CC} -c fieldTest.c -I../

field.o:
	$(MAKE) -C ../

fieldTest.a: fieldTest.o
	ar rcs libfieldTest.a fieldTest.o