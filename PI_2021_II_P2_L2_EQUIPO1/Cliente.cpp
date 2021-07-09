#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <iomanip>
#include "Cliente.h"

using namespace std;

Cliente::Cliente(string nombre, string apellido, string DNI, string direccion, int edad, string ticket, string tipoC, double des)
	:Persona(nombre, apellido, DNI, direccion, edad) {
	carnetBibliotecario = ticket;
	tipoCliente = tipoC;
	descuento = des;
}
void Cliente::establecerTicket(string _ticket) {
	carnetBibliotecario = _ticket;
}
void Cliente::establecerTipoCliente(string _tipoC) {
	tipoCliente = _tipoC;
}
void Cliente::establecerDescuento(double _descuento) {
	descuento = _descuento;
}
string Cliente::obtenerCarnet() const {
	return carnetBibliotecario;
}
string Cliente::obtenerTipoCliente() const {
	return tipoCliente;
}
double Cliente::obtenerDescuento() const {
	return descuento;
}
string Cliente::inscribirTipoCliente()const {
	int tipo;
	string tipoDeCliente;
	cout << endl << "Ingrese el tipo cliente. " << endl;
	cout << "1.Cliente Interno. " << " 2.	Cliente Externo." << endl;
	cin >> tipo;
	if (tipo == 1)
	{
		tipoDeCliente = "Interno";
	}
	else if (tipo == 2)
	{
		tipoDeCliente = "Externo";
	}
	else
	{
		tipoDeCliente = " - - - ";
	}
	return tipoDeCliente;
}
string Cliente::validarCarnet() const {
	int dia, mes, año, numero;
	string IdCarnet, num1, num2, num3;
	cout << endl;
	cout << "Ingrese la fecha de inscripcion(ejemplo 5/7/2021): " << endl;
	cout << "Dia: ";
	cin >> dia;
	cout << "Mes: ";
	cin >> mes;
	cout << "Año: ";
	cin >> año;
	cout << endl;
	num1 = to_string(dia + dia);
	num2 = to_string(mes);
	num3 = to_string(año - mes);
	cout << "Ingrese el numero de carnet: " << endl;
	cin >> numero;
	if (numero > 50)
	{
		cout << "Carnet: ";
		IdCarnet = num1 + "AB" + num2 + "GH" + num3 + "XP";
		cout << IdCarnet;
	}
	else if (numero > 40)
	{
		cout << "Carnet: ";
		IdCarnet = num1 + "FN" + num2 + "ZP" + num3 + "WW";
		cout << IdCarnet;
	}
	else if (numero > 30)
	{
		cout << "Carnet: ";
		IdCarnet = num1 + "WG" + num2 + "JQ" + num3 + "LL";
		cout << IdCarnet;
	}
	else if (numero > 20)
	{
		cout << "Carnet: ";
		IdCarnet = num1 + "VC" + num2 + "TR" + num3 + "BB";
		cout << IdCarnet;
	}
	else if (numero > 10)
	{
		cout << "Carnet: ";
		IdCarnet = num1 + "UO" + num2 + "MR" + num3 + "EJ";
		cout << IdCarnet;
	}
	else if (numero < 10)
	{
		cout << "Carnet: ";
		IdCarnet = num1 + "KL" + num2 + "TY" + num3 + "ZA";
		cout << IdCarnet;
	}
	else
	{
		cout << "Numero incorrecto" << endl;
		IdCarnet = "No Registrado";
	}
	return IdCarnet;
}
double Cliente::asignarDescuento(string tipoC) {
	double desc;
	cout << "Asignar descuento" << endl;
	if (tipoC == "Interno")
	{
		cout << "Descuento de 20%" << endl;
		desc = 0.20;
	}
	else if (tipoC == "Externo")
	{
		cout << "Descuento de 10%" << endl;
		desc = 0.10;
	}
	else
	{
		cout << "No obtiene descuento" << endl;
		desc = 0.0;
	}
	return desc;
}
void Cliente::imprimirCarnet() const {
	cout << "__________________________________________________________" << endl;
	cout << "   -----------" << endl;
	cout << "   | F       |" << "	Nombre: " << obtenerPrimerNombre() << endl;
	cout << "   |   O     |" << "	Identificacion: " << obtenerDNI() << endl;
	cout << "   |     T   |" << "	Direccion: " << obtenerDireccion() << endl;
	cout << "   |       O |" << "	Edad: " << obtenerEdad() << endl;
	cout << "   -----------" << "	Tipo de cliente: " << obtenerTipoCliente() << endl;
	cout << "	" << endl;
	cout << "" << "	No. Carnet: " << obtenerCarnet() << endl;
	cout << "__________________________________________________________" << endl;
}

void Cliente::mostrarInformacion() const {
	Persona::mostrarInformacion();
	cout << "Tipo de cliente: " << obtenerTipoCliente() << " con descuento del " << obtenerDescuento()*100 << "%" << endl;
	cout << "Numero de carnet: " << obtenerCarnet() << endl;
}
