#include "Rational.h"
#include <sstream>
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;
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
	int comunDivisor = 0;
	if (numerador>denominador)
	{
		comunDivisor = maxDivisor(numerador,denominador);
	}else{
		comunDivisor = maxDivisor(denominador,numerador);
	}
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

}
string Rational::operator-(Rational& racional){

}
string Rational::operator*(Rational& racional){
	int newNumerator = this->numerator * racional.getNumerator();
	int newDenominator = this-> numerator * racional.getDenominator();
}
string Rational::operator/(Rational& racional){

}	
string Rational::toString(){

}
Rational::~Rational(){

}