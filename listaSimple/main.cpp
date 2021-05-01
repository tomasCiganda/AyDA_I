#include <iostream>

using namespace std;

struct nodo 
{
	int elemento;
	nodo * siguiente;
};

nodo * crearNodo(int elemento, nodo * siguiente);

nodo * agregarElemento(nodo * primero, int nuevoElemento);

bool eliminarLista(nodo * &primero, int elementoAEliminar);

void mostrarLista(nodo * primero);

int main ()
{
	cout << "inicio de ejecucion" << endl;

	nodo * lista = crearNodo(0, NULL);
	lista = agregarElemento(lista, 1);
	lista = agregarElemento(lista, 2);
	mostrarLista(lista);
	if(eliminarLista(lista, 9))
	{
		cout << "se borro el elemento" << endl;
	}
	else
	{
		cout << "no se borro el elemento" << endl;
	}
	cout << "fin de la eliminacion" << endl;
	mostrarLista(lista);
	return 0;
}

nodo * crearNodo(int elemento, nodo * nodoSiguiente)
{
	nodo * nuevoNodo = new nodo();
	nuevoNodo->elemento = elemento;
	nuevoNodo->siguiente = nodoSiguiente;

	return nuevoNodo;
}

nodo * agregarElemento(nodo * primero, int nuevoElemento)
{
	nodo * nuevoNodo = crearNodo(nuevoElemento, primero);

	return nuevoNodo;
}

void mostrarLista(nodo * primero)
{
	nodo * cursor = primero;

	while (cursor != NULL)
	{
		cout << "Valor de nodo: " << cursor->elemento << endl;

		cursor = cursor->siguiente; 

	}
}

bool eliminarLista(nodo * &primero, int elementoAEliminar)
{
	nodo ** cursor = &primero;
	while ((*cursor) != NULL)
	{
		if ((*cursor)->elemento == elementoAEliminar)
		{
			nodo * borrar = *cursor;
			*cursor = (*cursor)->siguiente;
			delete borrar;
			return true;
		}
		else
		{
			cursor = &(*cursor)->siguiente;
		}
	}

	return false;
}
