#include "PilaColor.h"

PilaColor::PilaColor()
{
	ListaParaPila = new ListaColor();
	ListaParaPila->Inicio = nullptr;
	ListaParaPila->Final = nullptr;
	ListaParaPila->recorrido = 0;


}

	void PilaColor::InsetarValor(int valor)
	{
		ListaParaPila->InsertarAlFinal(valor);
	}

	NodoColor* PilaColor::Tope()
	{
		return ListaParaPila->Final;
	}

	int PilaColor::Valor(int num) 
	{
		return ListaParaPila->ObtenerValor(num);
	}

	int PilaColor::ExtraerValorTope() 
	{
		return ListaParaPila->ObtenerUltimoValor();
	}