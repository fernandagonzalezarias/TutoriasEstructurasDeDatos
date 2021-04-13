#ifndef LISTAEMPLEADOS_H
#define LISTAEMPLEADOS_H
#include "Empleado.h"

class ListaEmpleados{
private:
	Empleado** vecEmpleados;
	int tam, cant;
public:
	ListaEmpleados();
	ListaEmpleados(int);
	~ListaEmpleados();
	
	Empleado* getEmpleado(int);
	
	bool insertarEmpleado(string, string, string, int, double);
	bool eliminarEmpleado(string);
	bool existeEmpleado(string);
	string toString();
	double promedioSalarios();
	double sumaSalarios();
};

#endif // !LISTAEMPLEADOS_H
