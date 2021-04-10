#include <iostream>
#include <math.h>

using namespace std;

double raizCuadrada(double numero){

	double resultado = sqrt(numero);
	
	return resultado;
}

void calcularRaicesPolinomioSegundoGrado(double a,double b,double c){

	double discriminante =((b*b) - (4*a*c));

	cout << "discriminante: " << discriminante << endl; 
	if( discriminante>0.0 ){
		
		cout << "x1 " << ((-b + raizCuadrada(discriminante))/(2*a)) << endl;
		cout << "x2 " << ((-b - raizCuadrada(discriminante))/(2*a)) << endl;

	} else if (discriminante==0.0){
		cout << "x1 y x2 " << ((-b)/(2*a)) << endl;
	} else {
		cout << "x1 y x2 " << "parte real " << (-b)/(2*a) << " parte imaginaria " << raizCuadrada(-discriminante)/(2*a);
	}
}

int main () {

	double a;
	double b;
	double c;

	cout << "ingrese los valores de a b c separados por espacios: " << endl;

	cin >> a >> b >> c;
	
	calcularRaicesPolinomioSegundoGrado(a,b,c);
	
	return 0;
}
