#include "Rational.h"
#include <sstream>
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::stringstream;
int Rational::maxDivisor(int a,int b){
	if(b == 0){
		return a;
	}else{
		return maxDivisor(b,a%b);
	}
}
void Rational::setNumerator(int num){
	numerator = num;
}
void Rational::setDenominator(int num){
	if (num>0)
	{
		denominator = num;
	}else{
		cout<<"El denominador no puede ser 0. Se seteará a 1"<<endl;
		denominator = 1;
	}
}
Rational::Rational(int numerador, int denominador){
	Rational::setNumerator(numerador);
	Rational::setDenominator(denominador);

	int comunDivisor = 0;
	if (numerator>denominator)
	{
		comunDivisor = maxDivisor(numerator,denominator);
	}else{
		comunDivisor = maxDivisor(denominator,numerator);
	}
	numerator = numerator/comunDivisor;
	denominator = denominator/comunDivisor;
}
int Rational::lcm(int a,int b){
	if (a>b)
	{
		return (a*b)/Rational::maxDivisor(a,b);
	}else{
		return (a*b)/Rational::maxDivisor(b,a);
	}
}
int Rational::getNumerator(){
	return numerator;
}
int Rational::getDenominator(){
	return denominator;
}
string Rational::operator+(Rational& racional){
	stringstream ss;
	if (this->denominator == racional.getDenominator())
	{
		ss<<this->numerator+racional.getNumerator()<<"/"<<this->denominator<<"\n";	
	}else{
		int lcm = Rational::lcm(this->denominator,racional.getDenominator());
		ss<< (this->numerator*(lcm/this->denominator))+(racional.getNumerator()*(lcm/racional.getDenominator()))<<"/"<<lcm<<"\n";
	}
	return ss.str();
}
string Rational::operator-(Rational& racional){
	stringstream ss;
	if (this->denominator == racional.getDenominator())
	{
		if(this->numerator>racional.getNumerator()){
			ss<<this->numerator-racional.getNumerator()<<"/"<<this->denominator<<"\n";
		}else{
			ss<<this->numerator-racional.getNumerator()<<"/"<<this->denominator<<"\n";
		}	
	}else{
		int lcm = Rational::lcm(this->denominator,racional.getDenominator());
		ss<<(this->numerator*(lcm/this->denominator))-(racional.getNumerator()*(lcm/racional.getDenominator()))<<"/"<<lcm<<"\n";
	}
	return ss.str();
}
string Rational::operator*(Rational& racional){
	stringstream ss;
	if (this->numerator == 0 || racional.getNumerator() == 0)
	{

		ss<<0<<"\n";
	}else{
		int newNumerator = this->numerator*racional.getNumerator();
		int newDenominator = this-> denominator*racional.getDenominator();
		if (newNumerator> newDenominator)
		{
			ss<< newNumerator/Rational::maxDivisor(newNumerator,newDenominator)<<"/"<<newDenominator/Rational::maxDivisor(newNumerator,newDenominator)<<"\n";
		}else{
			ss<< newNumerator/Rational::maxDivisor(newDenominator,newNumerator)<<"/"<<newDenominator/Rational::maxDivisor(newDenominator,newNumerator)<<"\n";
		}
	}
	return ss.str();
}
string Rational::operator/(Rational& racional){
	stringstream ss;
	if (this->numerator == 0 || racional.getNumerator() == 0)
	{

		ss<<0<<"\n";
	}else{
		int newNumerator = this->numerator*racional.getDenominator();
		int newDenominator = this-> denominator*racional.getNumerator();
		if (newNumerator> newDenominator)
		{
			ss<< newNumerator/Rational::maxDivisor(newNumerator,newDenominator)<<"/"<<newDenominator/Rational::maxDivisor(newNumerator,newDenominator)<<"\n";
		}else{
			ss<< newNumerator/Rational::maxDivisor(newDenominator,newNumerator)<<"/"<<newDenominator/Rational::maxDivisor(newDenominator,newNumerator)<<"\n";
		}
	}
	return ss.str();
}	
string Rational::toString(){
	stringstream ss;
	ss<<numerator<<"/"<<denominator;
	return ss.str();
}
Rational::~Rational(){
	cout<<"Eliminando fracción"<<endl;
}