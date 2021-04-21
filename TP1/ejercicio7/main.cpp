#include <iostream>

using namespace std;

void cantidadDeOcurrencias (int arreglo[], int numeroBuscado);
void cargarArreglo (int arr[], int tamanio);
void mostrarArreglo (int arr[], int tamanio);

int main ()
{
	int tamanioArreglo = 10;
	int arr[tamanioArreglo];

	cargarArreglo(arr, tamanioArreglo);
	mostrarArreglo(arr, tamanioArreglo);
}

void cargarArreglo (int arr[], int tamanio)
{
	cout << "ingrese los " << tamanio << " elementos del arreglo" << endl;

	for (int i = 0; i<tamanio; i++)
	{
		cin >> arr[i];
	}
}
void mostrarArreglo (int arr[], int tamanio)
{
	cout << "Arreglo " << endl;

	for (int i = 0; i<tamanio; i++)
	{
		cout << arr[i] << endl;
	}
}
