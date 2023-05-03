CC = gcc

all: fieldTest interactionTest errorTest
	cd ../field/fieldTest && fieldTest.exe && cd ../../ && cd ./interaction/Tests && interactionTests.exe && cd ../../ && cd ./error/errorTest && errorTest.exe && cd ../../ && cd ./run/runTest && runTest.exe && cd ../../

runTest:
	cd ../run/runTest && mingw32-make && cd ../../

fieldTest:
	cd ../field/fieldTest && mingw32-make && cd ../../

interactionTest:
	cd ../interaction/Tests && mingw32-make && cd ../../

errorTest:
	cd ../error/errorTest && mingw32-make && cd ../../
