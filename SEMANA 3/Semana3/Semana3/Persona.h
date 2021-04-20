#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Persona {
public:
	Persona();
	Persona(string, string, string);
	~Persona();
	void setNombre(string);
	void setIdentificacion(string);
	void setApellido(string);
	string getApellido();
	string getIdentificacion();
	string getNombre();
	string toString();

private:
	string identificacion, nombre, apellido;
};

