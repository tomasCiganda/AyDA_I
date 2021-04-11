#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char *argv[]) {
	string textoParaReemplazar;

	cout << "Ingrese un texto para reemplazar por los valores de linea de comando" << endl;

	getline(cin,textoParaReemplazar);
	
	replace(textoParaReemplazar.begin(), textoParaReemplazar.end(), 'a','b');

	cout << "El texto reemplazado es: " << textoParaReemplazar << endl;

}
