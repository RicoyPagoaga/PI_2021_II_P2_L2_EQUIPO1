#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;

Persona::Persona(string nom, string apel, string dni, string dir, int ed) {
	primerNombre = nom;
	apellidoPaterno = apel;
	DNI = dni;
	direccion = dir;
	edad = ed;
}
void Persona::establecerPrimerNombre(string nom) {
	primerNombre = nom;
}
string Persona::obtenerPrimerNombre() const {
	return primerNombre;
}
void Persona::establecerApellidoPaterno(string apel) {
	apellidoPaterno = apel;
}
string Persona::obtenerApellidoPaterno() const {
	return apellidoPaterno;
}
void Persona::establecerDNI(string dni) {
	DNI = dni;
}
string Persona::obtenerDNI() const {
	return DNI;
}
void Persona::establecerDireccion(string dir) {
	direccion = dir;
}
string Persona::obtenerDireccion() const {
	return direccion;
}
void Persona::establecerEdad(int ed) {
	edad = ed;
}
int Persona::obtenerEdad()const {
	return edad;
}
void Persona::registrarPersona() {
	cout << "Ingrese nombre\n";
	cin >> primerNombre;
	cout << "Ingrese apellido\n";
	cin >> apellidoPaterno;
	cout << "ingrese DNI\n";
	cin >> DNI;
	cout << "Establecer direccion\n";
	cin >> direccion;
	cout << "Ingrese edad\n";
	cin >> edad;
}

void Persona::mostrarInformacion()const {
	cout << "Nombre: " << obtenerPrimerNombre() << " " << obtenerApellidoPaterno() << endl;
	cout << "Edad: " << obtenerEdad() << endl;
	cout << "Direccion: " << obtenerDireccion() << endl;
	cout << "Identificacion: " << obtenerDNI() << endl;
}
