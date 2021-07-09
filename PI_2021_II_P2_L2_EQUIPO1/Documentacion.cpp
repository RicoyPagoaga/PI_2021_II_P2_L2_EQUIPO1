#include<iostream>
#include<stdexcept>
#include"Documentacion.h"
using namespace std;
Documentacion::Documentacion(string nombre, string apellido, string DNI, string direccion, int edad, string libro, int dias, double alquiler)
	: Persona (nombre, apellido, DNI, direccion, edad) {
	nombreLibro = libro;
	diasAlquiler = dias;
	costoAlquiler = alquiler;
}
void Documentacion::establecerNombreLibro(string libro) {
	nombreLibro = libro;
}
string Documentacion::obtenerNombreLibro() const {
	return nombreLibro;
}
void Documentacion::establecerDiasAlquiler(int dias) {
	if (dias >= 0)
		diasAlquiler = dias;
	else
		throw invalid_argument("Los dias deben se >= 0");
	
}
int Documentacion::obtenerDiasAlquiler() const {
	return diasAlquiler;
}
void Documentacion::establecerCostoAlquiler(double alquiler) {
	if (alquiler >= 0)
		costoAlquiler = alquiler;
	else
		throw invalid_argument("El costo de alquiler debe ser >= 0");
}
double Documentacion::obtenerCostoAlquiler() const {
	return costoAlquiler;
}
double Documentacion::calcularTotal() const {
	return diasAlquiler * costoAlquiler;
}
void Documentacion::imprimir() const {
	Persona::mostrarInformacion();
	cout << "\nCosto total: " << calcularTotal() << endl;
}