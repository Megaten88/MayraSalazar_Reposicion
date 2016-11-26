#include "Racional.h"
#include <sstream>
#include <string>
using std::string;

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
	denominator = num;
}
Rational::Rational(int, int){

}
int Rational::getNumerator(){

}
int Rational::getDenominator(){

}
string Rational::operator+(Rational&){

}
string Rational::operator-(Rational&){

}
string Rational::operator*(Rational&){

}
string Rational::operator/(Rational&){

}	
string Rational::toString(){

}
Rational::~Rational(){

}