#include "ListaEmpleados.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ListaEmpleados* vector = new ListaEmpleados(5);
	//Empleado* empleado1 = new Empleado("117", "Fernanda", "E200", 21, 550000);
//	if (vector->insertarEmpleado("117", "Fernanda", "E200", 21, 550000)){
//		cout<<"Se ha insertado el empleado :D \n";
//	} else {
//		cout<<"No se ha insertado el empleado D: \n";
//	}

	vector->insertarEmpleado("117", "Fernanda", "E200", 21, 550000);
	vector->insertarEmpleado("116", "Maria", "E201", 20, 520000);
	vector->insertarEmpleado("115", "Sebas", "E202", 23, 510000);
	cout<< vector->sumaSalarios();
	
	delete vector;
	//cout<<empleado1->toString();
	return 0;
}
