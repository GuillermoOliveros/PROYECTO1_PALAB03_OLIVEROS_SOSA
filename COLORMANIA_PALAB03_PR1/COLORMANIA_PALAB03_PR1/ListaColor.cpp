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
		Nodo->next = header;
		header = Nodo;
	}
	count++;
}

int ListaColor::Count() {
	return count;
}

int ListaColor::GetItem(int index) {

	if ((index >= 0) && (index < count)) {
		Node* temp = header;
		int position = 0;
		while ((temp) && (position < index)) {
			temp = temp->next;
			position++;
		}
		return temp->data;
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
void ListaColor::RemoveAt(int index) {
	Node* temp = header;
	if (Count() != 0) {
		if ((Count() == 1) || (index == 0)) {
			Node* temp = header;
			if (Count() != 0) {
				header = header->next;
				if (Count() == 1) {
					tail = header;
				}
				count--;
			}
		}
	}
}



