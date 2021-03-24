schieferwurf: schieferwurf.o vektoren.o
	gcc -o schieferwurf.out schieferwurf.o vektoren.o

schieferwurf.o: schieferwurf.c
	gcc -c -o schieferwurf.o schieferwurf.c

vektoren.o: vektoren.c
	gcc -c -o vektoren.o vektoren.c

run:
	./schieferwurf.out > schieferwurf1.csv
	cat schieferwurf1.csv | tr \. \, > schieferwurf2.csv
