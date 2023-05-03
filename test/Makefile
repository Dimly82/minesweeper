CC = gcc

all: runTest fieldTest interactionTest errorTest
	cd ../field/fieldTest && fieldTest.exe && cd ../../run/runTest && runTest.exe && cd ../../interaction/Tests && interactionTests.exe && cd ../../error/errorTest && errorTest.exe

runTest:
	cd ../run/runTest && mingw32-make

fieldTest:
	cd ../field/fieldTest && mingw32-make

interactionTest:
	cd ../interaction/Tests && mingw32-make

errorTest:
	cd ../error/errorTest && mingw32-make
