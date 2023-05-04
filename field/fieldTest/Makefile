CC = gcc

all: fieldTest.c field.o fieldTest.a
	${CC} -c fieldTest.c

field.o:
	$(MAKE) -C ../

fieldTest.a: fieldTest.c
	ar rcs libfieldTest.a fieldTest.o