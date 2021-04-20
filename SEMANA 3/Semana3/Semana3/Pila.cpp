#include "Pila.h"


Pila::Pila():inicio(nullptr){}


Pila::~Pila(){ 
	struct Nodo* aux = inicio;
	struct Nodo* temp;
	while (aux != nullptr) { // Para saber que hay datos en la pila
		temp = aux; 
		aux = aux->next;
		delete temp;
	}
}

Nodo* Pila::getInicio() { return inicio; }

void Pila::push(Persona* item){ //Inserta un elemento en la pila
	struct Nodo* nuevo;
	nuevo = new struct Nodo;
	nuevo->dato = item;
	if (inicio == nullptr) { // se puede mejorar a if(inicio)
		inicio = nuevo;
		nuevo->next = nullptr;
		//cout << "SE INSERTO\n";
	}
	else {
		nuevo->next = inicio;
		inicio = nuevo;
	}
}

Persona* Pila::pop() {
	if (inicio != nullptr) {
		Persona* info = inicio->dato;
		struct Nodo* aux = inicio;
		inicio = inicio->next;
		delete aux;
		return info;
	}
	return nullptr;
}

string Pila::toString() {
	stringstream s;
	Nodo* aux;
	aux = inicio;
	while (aux != nullptr) {
		s << aux->dato->toString();
		aux = aux->next;
	}
	return s.str();
}