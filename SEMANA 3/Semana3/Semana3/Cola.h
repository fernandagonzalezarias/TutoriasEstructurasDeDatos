#pragma once
#include "Nodo.h"

class Cola {
public:
	Cola();
	~Cola();
	struct Nodo* getInicio();
	struct Nodo* getFinal();
	void enqueue(Persona*);
	Persona* dequeue();
	string toString();
private:
	Nodo* inicio, *final;
};

