#include "Persona.h"

Persona::Persona() {
	this->nombre = "indef";
	this->apellido = "indef";
	this->identificacion = "indef";
}

Persona::Persona(string Pid, string Pnom, string Papellido): identificacion(Pid), nombre(Pnom), apellido(Papellido){}

Persona::~Persona(){ /* se destruye la persona*/}

void Persona::setIdentificacion(string identificacion) {
	this->identificacion = identificacion;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

void Persona::setApellido(string apellido) {
	this->apellido = apellido;
}

string Persona::getIdentificacion() {
	return this->identificacion;
}

string Persona::getNombre() {
	return this->nombre;
}

string Persona::getApellido() {
	return this->apellido;
}


string Persona::toString() {
	stringstream s;
	s << "Identificacion: " << identificacion << endl;
	s << "Nombre completo: " << nombre << " " << apellido << endl;
	return s.str();
}