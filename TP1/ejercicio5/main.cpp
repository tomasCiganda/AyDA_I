#include <iostream>
#include <cmath>

using namespace std;

double rentabilidadEstimada(int periodoMeses, double montoInicial, double interesAnual){
	//Aplico formula ded interes compuesto montoInicial*(1+interes/100/12)^meses - monto inicial
	double rentabilidad = (montoInicial*(pow((1+((interesAnual/100)/12)), periodoMeses)))-montoInicial;

	return rentabilidad;

}

int main (){

	int periodoMeses;
	double montoInicial;
	double interesAnual;

	cout << "Ingrese el monto anual que desea ingresae al banco, la tasa de interes anual y el periodo te tiempo en meses" << endl;

	cin >> montoInicial >> interesAnual >> periodoMeses;
	cout << "La rentabilidad es de: " << rentabilidadEstimada(periodoMeses, montoInicial, interesAnual) << endl;
}
