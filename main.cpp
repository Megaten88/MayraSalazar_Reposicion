#include "Rational.h"
#include <iostream>
#include <vector>
using namespace std;

void imprimirVector(vector<Rational*>);
int main(int argc, char const *argv[])
{
	vector<Rational*> fractions;
	int opcion = 0;
	while(opcion!=4){
		cout<<"---------CALCULADORA DE RACIONALES------\n1)Ingrese un número entero\n2)Ingrese una fracción\n3)Operaciones de fracciones\n4)Salir\nElija una opción: "<<endl;
		cin>>opcion;
		int numerador = 0;
		int denominador = 0;

		if (opcion == 1){
			cout<<"Ingrese el número que desea: ";
			cin>>numerador;
			fractions.push_back(new Rational(numerador,1));
		}else if(opcion == 2){
			cout<<"Ingrese el numerador: ";
			cin>>numerador;
			cout<<"Ingrese el denominador: ";
			cin>>denominador;
			fractions.push_back(new Rational(numerador,denominador));
		}else if(opcion == 3){
			if(fractions.size()>0){
				int op;
				cout<<"------Operaciones Matemáticas ----\n1)Sumar números o fracciones\n2)Restar números o fracciones\n3)Multiplicar números o fracciones\n4) Dividir números o fracciones\n";
				cout<<"Ingrese una opcion: ";
				cin>>op;
				cout<<endl;
				cout<<endl;
				int num1, num2;
				if(op == 1){
					imprimirVector(fractions);
					cout<<endl;
					cout<<"Elija dos fracciones o números para sumar: "<<endl;
					cout<<"Primer fracción o número: ";
					cin>>num1;
					cout<<"Segunda fracción o número: ";
					cin>>num2;
					cout<<fractions.at(num1)->toString()<<" + " << fractions.at(num2)-> toString() << " = " << (*fractions.at(num1))+(*fractions.at(num2))<<endl;
				}else if(op == 2){
					imprimirVector(fractions);
					cout<<endl;
					cout<<"Elija dos fracciones o números para restar: "<<endl;
					cout<<"Primer fracción o número: ";
					cin>>num1;
					cout<<"Segunda fracción o número: ";
					cin>>num2;
					cout<<fractions.at(num1)->toString()<<" - " << fractions.at(num2)-> toString() << " = " << (*fractions.at(num1))-(*fractions.at(num2))<<endl;
				}else if(op == 3){
					imprimirVector(fractions);
					cout<<endl;
					cout<<"Elija dos fracciones o números para multiplicar: "<<endl;
					cout<<"Primer fracción o número: ";
					cin>>num1;
					cout<<"Segunda fracción o número: ";
					cin>>num2;
					cout<<fractions.at(num1)->toString()<<" * " << fractions.at(num2)-> toString() << " = " << (*fractions.at(num1))*(*fractions.at(num2))<<endl;

				}else if(op == 4){
					imprimirVector(fractions);
					cout<<endl;
					cout<<"Elija dos fracciones o números para dividir: "<<endl;
					cout<<"Primer fracción o número: ";
					cin>>num1;
					cout<<"Segunda fracción o número: ";
					cin>>num2;
					cout<<fractions.at(num1)->toString()<<" / " << fractions.at(num2)-> toString() << " = " << (*fractions.at(num1))/(*fractions.at(num2))<<endl;

				}else if(opcion == 4){
					cout<<"Salió."<<endl;
				}else{
					cout<<"Ingresó una opción inválida."<<endl;
				}
			}else{

			}
		}else{
			cout<<"Ingresó una opción inválida"<<endl;
		}
	}
	return 0;
}
void imprimirVector(vector<Rational*> vector){
	cout<<"------Lista de números Racionales----------"<<endl;
	for (int i = 0; i < vector.size(); ++i)
	{
		cout<<i<<")"<<vector.at(i)->toString()<<endl;
	}
}

	/*Rational* racional = new Rational(1,3);
	Rational* racional2 = new Rational(1,2);
	cout<<racional->toString()<<endl;
	cout<<racional2->toString()<<endl;
	cout<< (*racional)-(*racional2);
	delete racional;
	delete racional2;*/