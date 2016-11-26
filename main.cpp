#include "Rational.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	Rational* racional = new Rational(2,10);
	cout<< racional->toString();
	delete racional;
	return 0;
}