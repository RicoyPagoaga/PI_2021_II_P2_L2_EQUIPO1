#include<iostream>
#include<stdexcept>
#include"Computadoras.h"
using namespace std;
Computadoras::Computadoras(string nombre, string apellido, string DNI, string direccion, int edad, string pc,
	int hora, double precio) : Persona(nombre, apellido, DNI, direccion, edad) {
	computadora = pc;
	horaUso = hora;
	costoHora = precio;
}
void Computadoras::establecerHoraUso(int hora) {
	if (hora >= 0)
		horaUso = hora;
	else
		throw invalid_argument("Las horas de uso deben ser >= 0");
}
int Computadoras::obtenerHoraUso() const {
	return horaUso;
}
void Computadoras::establecerCostoHora(double precio) {
	if (precio >= 0)
		costoHora = precio;
	else
		throw invalid_argument("Costo por hora debe ser >= 0");
}
double Computadoras::obtenerCostoHora() const {
	return costoHora;
}
void Computadoras::establecerComputadora(string pc) {
	computadora = pc;
}
string Computadoras::obtenerComputadora() const {
	return computadora;
}
double Computadoras::calcularTotal() const {
	return horaUso * costoHora;
}
void Computadoras::Alquilar() {
	Persona::registrarPersona();
	cout << "Ingrese horas de uso\n";
	cin >> horaUso;
	cout << "Ingrese costo por hora\n";
	cin >> costoHora;
	cout << "Ingrese numero de Ordenador\n";
	cin >> computadora;
}
void Computadoras::imprimir() const {
	Persona::mostrarInformacion();
	cout << "\nEl total a pagar es: L." << calcularTotal() << endl;
}