#pragma once
#include <string>
using std::string;
class Rational
{
private:
	int numerator;
	int denominator;
	int maxDivisor(int,int);
	void setNumerator(int);
	void setDenominator(int);
	int lcm(int,int);
public:
	Rational(int, int);
	string toString();
	~Rational();
	int getNumerator();
	int getDenominator();
	string operator+(Rational&);
	string operator-(Rational&);
	string operator*(Rational&);
	string operator/(Rational&);	
};