#include "ListaColor.h"

//Funcionamiento de los m�todos 

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
	
	Node* temporal1 = header;
	Node* temporal2 = header->next;
	if (ListaColor::Count() == 0) {
		verificar = false;
	}
	else if (ListaColor::Count() == 1) {
		verificar = true;
	}
	else {
		int w = ListaColor::Count() - 1;
		while (w > 0) {
			if (temporal1->data == temporal2->data) {
				verificar = true;
			}
			else {
				verificar = false;
				break;
			}
			temporal1 = temporal1->next;
			temporal2 = temporal2->next;
			w--;
		}
	}
	return verificar;
}



