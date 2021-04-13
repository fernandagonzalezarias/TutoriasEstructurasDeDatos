#include "Empleado.h"	
	//salarioNeto = 500000
	//10.5%
	//
Empleado::Empleado(){
	this->identificacion = "Indef";
	this->nombre = "Indef";
	this->codigo = "Indef";
	this->edad = -1;
	this->salarioBruto= 0.0;
}

Empleado::Empleado(string pId, string pNombre, string pCodigo, int pEdad, double pSalarioB){
	this->identificacion=pId;
	this->nombre=pNombre;
	this->codigo=pCodigo;
	this->edad=pEdad;
	this->salarioBruto=pSalarioB;
}

Empleado::~Empleado(){
	//se destruye el objeto :D
}
string Empleado::getIdentificacion(){
	return this->identificacion;
}
string Empleado::getNombre(){
	return this->nombre;
}
string Empleado::getCodigo(){
	return this->codigo;
}
int Empleado::getEdad(){
	return this->edad;
}
double Empleado::getSalarioBruto(){
	return this->salarioBruto;
}
	
	//metodos basicos setters
void Empleado::setIdentificacion(string identificacion){
	this->identificacion= identificacion;
}
void Empleado::setNombre(string nombre){
	this->nombre=nombre;
}
void Empleado::setCodigo(string codigo){
	this->codigo=codigo;
}
void Empleado::setEdad(int edad){
	this->edad=edad;
}
void Empleado::setSalarioBruto(double salarioBruto){
	this->salarioBruto=salarioBruto;
}

//Metodos de calculo

double Empleado::salarioNeto(){
	double caja = salarioBruto * 0.105; // deducciones que todo empleado costarricense tiene por la caja
	return salarioBruto - caja;
}

string Empleado::toString(){
	stringstream s;
	s<<"-----DATOS DEL EMPLEADO-----\n";
	s<<"Identificacion: "<<getIdentificacion()<<endl;
	s<<"Nombre: "<<getNombre()<<endl;
	s<<"Codigo de empleado: "<<getCodigo()<<endl;
	s<<"Edad: "<<getEdad()<<endl;
	s<<"Salario bruto: "<<getSalarioBruto()<<endl;
	s<<"Salario neto: "<<salarioNeto()<<endl;
	return s.str();
}
