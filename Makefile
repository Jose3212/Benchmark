all:	benchmark.o
	g++ ./obj/benchmark.o -o ./bin/benchmark
benchmark.o:
	g++ -c ./src/benchmark.cpp -o ./obj/benchmark.o
rm:	
	rm ./obj/benchmark.o ./dat/datos.csv
