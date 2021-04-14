matrix: module.o drehmatrix.o
	gcc -o dreh.out module.o drehmatrix.o -lm

module.o: module.c
	gcc -c -o module.o module.c

drehmatrix.o: drehmatrix.c
	gcc -c -o drehmatrix.o drehmatrix.c

run:
	./dreh.out > help.csv
	cat help.csv | tr \. \, > drehmatrix.csv

