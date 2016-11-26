#include "Rational.h"
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<Rational> fracciones;
	Rational* racional = new Rational(1,3);
	Rational* racional2 = new Rational(1,2);
	cout<<racional->toString()<<endl;
	cout<<racional2->toString()<<endl;
	cout<< (*racional)-(*racional2);
	delete racional;
	delete racional2;
	return 0;
}