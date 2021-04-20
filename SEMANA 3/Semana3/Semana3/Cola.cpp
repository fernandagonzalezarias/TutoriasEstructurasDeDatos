#include "Cola.h"

Cola::Cola():inicio(nullptr), final(nullptr){}

Cola::~Cola() {
	struct Nodo* aux;
	while (inicio != nullptr) {
		aux = inicio;
		inicio = aux->next;
		delete aux;
	}
	inicio = nullptr;
	final = nullptr;
}

struct Nodo* Cola::getInicio() { return inicio; }
struct Nodo* Cola::getFinal() { return final; }

void Cola::enqueue(Persona* persona) { //ingresar elementos
	Nodo* aux = new Nodo;
	aux->dato = persona;
	aux->next = nullptr;
	if (inicio == nullptr) { // si el inicio esta vacio, puedo ingresar el dato ahi
		inicio = aux;
		//cout << "Se inserto" << endl;
	}
	else {
		final->next = aux; // sino, va al final
	}
	final = aux; // siempre me va a apuntar al último elemento de la cola
}

Persona* Cola::dequeue() { // sacar elementos de la cola
	Persona* item;
	struct Nodo* aux;
	aux = inicio;
	item = aux->dato;
	inicio = inicio->next;
	delete aux;
	return item;
}

string Cola::toString() {
	stringstream s;
	Nodo* aux;
	aux = inicio;
	while (aux != nullptr) {
		s << aux->dato->toString();
		aux = aux->next;
	}
	return s.str();
}
