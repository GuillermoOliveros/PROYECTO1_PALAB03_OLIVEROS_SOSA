#include "ListaColor.h"

//Funcionamiento de los métodos 

void ListaColor::Add(int item) {

	Node* MyNodo = new Node();
	MyNodo->data = item;

	//Si la lits esta vacia
	if (Count() == 0) {
		header = MyNodo;
		tail = MyNodo;
	}
	else { //Tiene elementos
		MyNodo->next = header;
		header = MyNodo;
	}
	count++;
}

int ListaColor::Count() {
	return count;
}

int ListaColor::GetItem(int index) {
	int counter = 0;
	struct Node* temporal = header;
	while ((temporal) && (counter <= index)) {
		if (counter == index) {
			return temporal->data;
		}
		temporal = temporal->next;
		counter++;
	}
	return -1;
	
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
void ListaColor::RemoveAtFirst() {
	header = header->next;
}

bool ListaColor::todosIguales() {
	
		if (Count() == 0) {
			return false;
		}

		for (int i = 0; i < Count()-1; i++) {
			if (GetItem(0) != GetItem(i)) {
				return false;
			}
		}

		return true;
	
}



