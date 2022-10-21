#include "ListaColor.h"

//Funcionamiento de los métodos 

ListaColor::ListaColor()
{
	Inicio = nullptr;
	Final = nullptr;
	recorrido = 0;
}

bool ListaColor::ListaVacia() {
	return recorrido == 0;
}

void::ListaColor::InsertarAlInicio(int valor)
{
	NodoColor* Color = new NodoColor();
	Color->valor = valor;


	if (ListaColor::ListaVacia())
	{
		Inicio = Color;
		Final = Color;
	}

	else
	{
		Color->next = Inicio;
		Inicio = Color;
	}

	recorrido++;

}

int ListaColor::TotalDatos()
{
	return recorrido;
}

void::ListaColor::InsertarAlFinal(int valor)
{
	NodoColor* color = new NodoColor();
	color->valor = valor;

	if (ListaColor::ListaVacia() == true)
	{
		Inicio = color;
		Final = color;
	}

	else
	{	
	color->next = Final;
	Final = color;
	}

	recorrido++;
	
}

NodoColor* ListaColor::SacarAlPrincio()
{
	NodoColor* aux = Inicio;

	if (ListaVacia() == false)
	{
		Inicio = Inicio->next;

		if (recorrido == 1)
		{
			Final = Inicio;
		}

		++recorrido;
	}
	return aux;
}

NodoColor* ListaColor::SacarAlFinal()
{
	NodoColor* aux = Final;

	if (ListaColor::ListaVacia() == false)
	{
		if (recorrido == 1)
		{
			Final = Final->next;
			Inicio = Final;
		}
		
		else 
		{
			NodoColor* aux1 = Inicio;
			aux = aux1->next;
			while (aux != Final) 
			{
				aux1 = aux;
				aux = aux1->next;
			}
			aux1->next = aux->next;
			Final = aux1;
		}
		++recorrido;
	}
	return aux;
}

NodoColor* ListaColor::ObtenerNodo(int valor)
{
	NodoColor* aux = Inicio;
	while  (aux->valor != valor)
	{
		aux = aux->next;
	}
	return aux;

}

int ListaColor::ObtenerValor(int pos)
{
	if ((pos >= 0) && (pos < recorrido))
	{
		NodoColor* aux = Inicio;
		int n = 0;
		while ((aux) && (n < pos))
		{
			aux = aux->next;
			n++;
		}
		return aux->valor;
	}
	return -1;
}

int ListaColor::ObtenerPrimerValor()
{
	NodoColor* aux = Inicio;

	return aux->valor;
}

int ListaColor::ObtenerUltimoValor()
{
	NodoColor* aux = Final;

	return aux->valor;
}

void ListaColor::Clear() 
{
	recorrido = 0;
	Inicio = nullptr;
	Final = nullptr;
}
