all:derle calistir

derle:
	g++ -I ./include -o ./lib/Islem.o -c ./src/Islem.cpp
	g++ -I ./include -o ./lib/IslemKuyrugu.o -c ./src/IslemKuyrugu.cpp
	g++ -I ./include -o ./lib/Islemci.o -c ./src/Islemci.cpp
	g++ -I ./include -o ./lib/IslemYoneticisi.o -c ./src/IslemYoneticisi.cpp
	g++ -I ./include -o ./lib/Test.o -c ./src/Test.cpp
	g++ -I ./include ./src/Islem.cpp ./src/IslemKuyrugu.cpp ./src/Islemci.cpp ./src/IslemYoneticisi.cpp ./src/Test.cpp -o ./bin/Test
calistir:
	./bin/test