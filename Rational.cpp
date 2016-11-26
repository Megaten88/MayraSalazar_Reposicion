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
	if (numerador>denominador)
	{
		comunDivisor = maxDivisor(numerador,denominador);
	}else{
		comunDivisor = maxDivisor(denominador,numerador);
	}
	numerator = numerator/comunDivisor;
	denominator = denominator/comunDivisor;
}
int Rational::lcm(int a,int b){
	int maxMultiple = a*b;
	int lcm = 0;
	for (int i = 1; i <= maxMultiple; ++i)
	{
		if (maxMultiple%i==0 && i%a==0 && i%b==0)
		{
			lcm = i;
		}
	}
	return lcm;
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
		int factor1 = lcm/this->numerador;
		int factor2 = lcm/racional.getNumerator();
		ss<< this->numerator + racional.getNumerator <<"/"<<lcm<<"\n";
	}
	return ss.str();
}
string Rational::operator-(Rational& racional){
	stringstream ss;
	if (this->denominator == racional.getDenominator())
	{
		ss<<this->numerator-racional.getNumerator()<<"/"<<this->denominator<<"\n";	
	}else{
		int lcm = Rational::lcm(this->denominator,racional.getDenominator());
		int factor1 = lcm/this->numerador;
		int factor2 = lcm/racional.getNumerator();
		ss<< this->numerator - racional.getNumerator <<"/"<<lcm<<"\n";
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
	cout<<"Eliminando fracción";
}