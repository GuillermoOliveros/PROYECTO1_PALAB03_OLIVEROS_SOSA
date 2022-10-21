#pragma once
#include "ListaColor.h"
#include "NodoColor.h"


class PilaColor
{
private: 
	ListaColor* ListaParaPila;

public:
	PilaColor();

	NodoColor* Tope();
	int Valor(int num);
	int ExtraerValorTope();
	void InsetarValor(int value);

};

