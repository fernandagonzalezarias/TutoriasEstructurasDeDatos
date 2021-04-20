#include "Cola.h"
#include "Pila.h"

int main() {
	Persona* p1 = new Persona("117", "Fernanda", "Gonzalez");
	Persona* p2 = new Persona("118", "Patricia", "Arias");
	Persona* p3 = new Persona("119", "Andres", "Araya");
	/*Pila* stack = new Pila();
	stack->push(p1);
	stack->push(p2);
	stack->push(p3);*/
	//cout << "\nPila #1\n";
	//cout << stack->toString();
	//stack->pop();
	//cout << "\nPila #2\n";
	//cout << stack->toString();
	//stack->pop();
	//cout << "\nPila #3\n";
	//cout << stack->toString();

	
	Cola* queue = new Cola();
	queue->enqueue(p1);
	queue->enqueue(p2);
	queue->enqueue(p3);
	cout << "Cola #1\n";
	cout << queue->toString();
	queue->dequeue();
	cout << "\nCola #2\n";
	cout << queue->toString();
	delete p1, p2, p3, queue;
	return 0;
}