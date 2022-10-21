#pragma once
#include "NodoColor.h"

//Referencias: https://www.youtube.com/watch?v=08QSylWv6jM https://www.youtube.com/watch?v=PbrgB6-xwNg&t=603s

 class ListaColor
{

public:
	NodoColor* Inicio;
	NodoColor* Final;
	int recorrido;

	ListaColor();
	~ListaColor();

	void InsertarAlInicio(int valor);
	void InsertarAlFinal(int valor);

	int ObtenerUltimoValor();
	int ObtenerPrimerValor();
	int ObtenerValor(int pos);

	NodoColor* SacarAlFinal();
	NodoColor* SacarAlPrincio();
	NodoColor* ObtenerNodo(int valor);

	int TotalDatos();
	void Clear();

	bool ListaVacia();


};

