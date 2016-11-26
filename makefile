main:

main.o:
	g++ -c main.cpp

Rational.o: Rational.h Rational.cpp
	g++ -c Rational.cpp