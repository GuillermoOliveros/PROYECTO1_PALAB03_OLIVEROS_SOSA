#include "ListaColor.h"

//Funcionamiento de los métodos 

void ListaColor::Add(int item) {

	Node* Nodo = new Node();
	Nodo->data = item;

	//Si la lits esta vacia
	if (Count() == 0) {
		header = Nodo;
		tail = Nodo;
	}
	else { //Tiene elementos
		tail->next = Nodo;
		tail = Nodo;
	}
	count++;
}

int ListaColor::Count() {
	return count;
}

int ListaColor::GetItem(int index) {

	int contador = 0;
	struct Node* temporal = header;

	while ((temporal) && contador <= index) {
		if (contador == index) {

			try {
				if (temporal != nullptr) {

					return temporal->data;


				}
			}
			catch (int nullptr_t) {
				return 0;
			}


		}
		temporal = temporal->next;
		contador++;
	}

	return 0;
}

int ListaColor::LastValue(int index) {

	int contador = 0;
	struct Node* temporal = header;

	while ((temporal) && contador <= index - 1) {
		if (contador == index - 1) {
			return temporal->data;
		}
		temporal = temporal->next;
		contador++;
	}

}

