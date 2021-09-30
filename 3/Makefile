all:derle calistir

derle:
	g++ -I ./include -o ./lib/Liste.o -c ./src/Liste.cpp
	g++ -I ./include -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include -o ./lib/main.o -c ./src/main.cpp
	g++ -I ./include ./src/Liste.cpp ./src/Dugum.cpp ./src/main.cpp -o ./bin/main
calistir:
	./bin/main