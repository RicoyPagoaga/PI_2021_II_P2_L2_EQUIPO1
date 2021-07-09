#include <iostream>
#include <string>

#include "Bibliotecario.h"
using namespace std;
unsigned int Bibliotecario::cuenta = 0;
unsigned int Bibliotecario::obtenerCuenta() {
	return cuenta;
}
//Bibliotecario::Bibliotecario() {
//}
Bibliotecario::Bibliotecario(string nombre, string apellido, string DNI, string direccion, int edad, string codigo, string seguroSocial, string telefono, double salario) : Persona(nombre, apellido, DNI, direccion, edad) {
	codigoEmpleado = codigo;
	numeroSeguroSocial = seguroSocial;
	Telefono = telefono;
	Salario = salario;
}
Bibliotecario::~Bibliotecario() {
	--cuenta;
}
void Bibliotecario::establecerCodigoEmpleado(string codigo) {
	codigoEmpleado = codigo;
}
string Bibliotecario::obtenerCodigoEmpleado() const {
	return codigoEmpleado;
}
void Bibliotecario::establecerNumeroSeguroSocial(string seguroSocial) {
	numeroSeguroSocial = seguroSocial;
}
string Bibliotecario::obtenerNumeroSeguroSocial() const {
	return numeroSeguroSocial;
}
void Bibliotecario::establecerTelefono(string telefono) {
	Telefono = telefono;
}
string Bibliotecario::obtenerTelefono() const {
	return Telefono;
}
void Bibliotecario::establecerSalario(double salario) {
	if (salario >= 0.0)
		Salario = salario;
}
double Bibliotecario::obtenerSalario() const {
	return Salario;
}
void Bibliotecario::mostrarInformacion() const {
	double salario1;
	cout << endl << "El bibliotecario " << endl;
	Persona::mostrarInformacion();
	cout << "Codigo de empleado: " << obtenerCodigoEmpleado() << endl
		<< "Seguro Social: " << obtenerNumeroSeguroSocial() << endl
		<< "Telefono: " << obtenerTelefono() << endl
		<< "Salario: L" << obtenerSalario() << endl;
	salario1 = obtenerSalario();
	if (salario1 > 5000 && salario1 < 15000)
		ImprimirAumento();
}
void Bibliotecario::ImprimirAumento() const {
	cout << "Obtuvo: L" << obtenerAumento() << endl;
	cout << "Su nuevo salario es: L" << calcularNuevoSaldo() << " Felicitaciones!" << endl;
	cout << endl;
}
double Bibliotecario::obtenerAumento() const {
	return obtenerSalario() * 0.35;
}
double Bibliotecario::calcularNuevoSaldo() const {
	return obtenerAumento() + obtenerSalario();
}