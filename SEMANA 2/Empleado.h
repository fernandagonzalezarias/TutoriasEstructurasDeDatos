#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Empleado{
private:
	string identificacion, nombre, codigo;
	int edad;
	double salarioBruto;
public:
	//contructores
	Empleado();
	Empleado(string, string, string, int, double);
	
	//destructor
	~Empleado();
	
	//metodos basicos getters
	string getIdentificacion();
	string getNombre();
	string getCodigo();
	int getEdad();
	double getSalarioBruto();
	
	//metodos basicos setters
	void setIdentificacion(string);
	void setNombre(string);
	void setCodigo(string);
	void setEdad(int);
	void setSalarioBruto(double);
	
	//métodos de cálculo
	
	double salarioNeto();
	string toString();
};

#endif // !EMPLEADO_H
