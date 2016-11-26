#include "Rational.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	Rational* racional = new Rational(1,5);
	Rational* racional2 = new Rational(1,5);
	cout<< (*racional)*(*racional2);
	delete racional;
	delete racional2;
	return 0;
}