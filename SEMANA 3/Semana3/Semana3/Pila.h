#pragma once
#include "Nodo.h"

class Pila {
public:
	Pila();
	~Pila();
	Nodo* getInicio();
	void push(Persona*);
	Persona* pop();
	string toString();
private:
	Nodo* inicio;
};

