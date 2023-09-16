calculator: main.o add.o div.o resultprint.o
	g++ main.o add.o div.o resultprint.o -o calculator

main.o: main.cpp
	g++ -c main.cpp

add.o: add.cpp
	g++ -c add.cpp

div.o: div.cpp
	g++ -c div.cpp

resultprint: resultprint.cpp
	g++ -c resultprint.cpp

