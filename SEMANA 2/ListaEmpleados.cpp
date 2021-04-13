#include "ListaEmpleados.h"
/*
	NOTA: POR CADA NEW QUE YO TENGA, DEBE EXISTIR UN DELETE
*/


ListaEmpleados::ListaEmpleados(){
	this->tam=20;
	this->cant=0;
	for (int i=0; i<tam; i++){
		vecEmpleados[i]=new Empleado(); //NULL -> 0
	}
}

ListaEmpleados::ListaEmpleados(int pTam){
	this->tam=pTam;
	this->cant=0;
	for (int i=0; i<tam; i++){
		vecEmpleados[i]=new Empleado(); //NULL -> 0
	}
}

ListaEmpleados::~ListaEmpleados() {
	for (int i=0; i<cant; i++){
		delete vecEmpleados[i];
	}	
	delete[] vecEmpleados;
	vecEmpleados= NULL;
}

Empleado* ListaEmpleados::getEmpleado(int x){
	return vecEmpleados[x];
}

bool ListaEmpleados::insertarEmpleado(string id, string nombre, string codigo, int edad, double salarioBruto){
	/*
		1. Verificar que tenga espacio para poder insertar el elemento
		2. Insertar el elemento en la siguiente posición libre
	*/
	bool flag = false; // Me indica que no se inserto o que si se inserto
	if (cant < tam){
		vecEmpleados[cant++]= new Empleado(id, nombre, codigo, edad, salarioBruto);
		flag = true;
	}
	return flag; 
	
}

//Metodo que me suma todos los salarios NETOS de los empleados
double ListaEmpleados::sumaSalarios(){
	double suma = 0.0;
	for (int i = 0; i< cant; i++){
		suma += vecEmpleados[i]->salarioNeto();
	}
	return suma;
}
