#include <iostream>

using namespace std;

struct nodo 
{
	int elemento;
	nodo * siguiente;
};

nodo * crearNodo();

void agregarLista(nodo * primero, nodo * nodoAgregar);

void eliminarLista();

void mostrarLista();

int main ()
{
	cout << "inicio de ejecucion";

	nodo * lista = new nodo;

	return 0;
}

nodo * crearNodo(int elemento)
{
	nodo * nuevoNodo = new nodo;
	nuevoNodo->elemento = elemento;

	return nuevoNodo;
}

void agregarLista(nodo * primero, nodo * nodoAgregar)
{
	while (primero->siguiente != NULL)
	{
		primero-> siguiente = primero->siguiente->siguiente;
	}

	primero->siguiente = nodoAgregar;
}
