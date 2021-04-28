spirale: module.o spirale.o
	gcc -o spir.out module.o spirale.o -lm

module.o: module.c
	gcc -c -o module.o module.c

spirale.o: spirale.c
	gcc -c -o spirale.o spirale.c

run:
	./spir.out > help.csv
	cat help.csv | tr \. \, > spirale.csv

