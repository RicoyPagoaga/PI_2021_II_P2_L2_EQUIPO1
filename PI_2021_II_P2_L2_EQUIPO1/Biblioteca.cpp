#include <iostream>
#include <string>
#include "Biblioteca.h"

using namespace std;
Biblioteca::Biblioteca(string nombre, string direccion, string franquicia, string estacionamiento, string color, int numEmpleados, int capClientes) {
	establecerBiblioteca(nombre, direccion, franquicia, estacionamiento, color, numEmpleados, capClientes);
}
void Biblioteca::establecerBiblioteca(string nom, string dir, string fran, string est, string col, int numEmp, int capClien) {
	establecerNombre(nom);
	establecerDireccion(dir);
	establecerFranquicia(fran);
	establecerEstacionamiento(est);
	establecerColor(col);
	establecerNumEmpleados(numEmp);
	establecerCapClientes(capClien);
}
void Biblioteca::establecerNombre(string nom) {
	nombre = nom;
}
void Biblioteca::establecerDireccion(string dir) {
	direccion = dir;
}
void Biblioteca::establecerFranquicia(string fran) {
	franquicia = fran;
}
void Biblioteca::establecerEstacionamiento(string est) {
	estacionamiento = est;
}
void Biblioteca::establecerColor(string col) {
	color = col;
}
void Biblioteca::establecerNumEmpleados(int numEmp) {
	numEmpleados = numEmp;
}
void Biblioteca::establecerCapClientes(int capClien) {
	capClientes = capClien;
}

string Biblioteca::obtenerNombre() const {
	return nombre;
}
string Biblioteca::obtenerDireccion() const {
	return direccion;
}
string Biblioteca::obtenerFranquicia() const {
	return franquicia;
}
string Biblioteca::obtenerEstacionamiento() const {
	return estacionamiento;
}
string Biblioteca::obtenerColor() const {
	return color;
}
int Biblioteca::obtenerNumEmpleados() const {
	return numEmpleados;
}
int Biblioteca::obtenerCapClientes() const {
	return capClientes;
}

void Biblioteca::imprimirBiblioteca()const {
	cout << "- - - - - - - - Biblioteca " << obtenerNombre() << " - - - - - - - " << endl;
	cout << "- - Direccion " << obtenerDireccion() << endl;
}
void Biblioteca::registrarBiblioteca() {
	int opcion, respuesta, _numEmp, _capClien;
	std::string _nom, _dir, _fran, _est, _col;
	do
	{
		cout << "- - Tabla de informacion - -" << endl;
		cout << "1. Nombre" << "		5. Color" << endl << "2. Direccion" << "		6. Numero de Empleados" << endl << "3. Franquicia"
			<< "		7. Capacidad de clientes" << endl << "4. Estacionamiento" << endl;
		cout << "Opcion: " << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			cout << "Ingrese el nombre: " << endl;
			cin >> _nom;
			establecerNombre(_nom);
			break;
		case 2:
			cout << "Ingrese la direccion : " << endl;
			cin >> _dir;
			establecerDireccion(_dir);
			break;
		case 3:
			cout << "Ingrese la franquicia: " << endl;
			cin >> _fran;
			establecerFranquicia(_fran);
			break;
		case 4:
			cout << "Estacionamiento( Disponible o No aplica ): " << endl;
			cin >> _est;
			establecerEstacionamiento(_est);
			break;
		case 5:
			cout << "Color del local: " << endl;
			cin >> _col;
			establecerColor(_col);
			break;
		case 6:
			cout << "Ingrese la cantidad de empleados en el establecimiento: " << endl;
			cin >> _numEmp;
			establecerNumEmpleados(_numEmp);
			break;
		case 7:
			cout << "Ingrese la capacidad de clientes: " << endl;
			cin >> _capClien;
			establecerCapClientes(_capClien);
			break;
		default:
			cout << "Opcion Invalida" << endl;
			break;
		}
		cout << "\n0- Salir" << "\n8- Salir" <<endl;
		cin >> respuesta;
	} while (respuesta >= 0 && respuesta <= 7);
}
void Biblioteca::imprimirDetalles() const {
	cout << "Franquicia " << obtenerFranquicia() << "		Estacionamiento " << obtenerEstacionamiento() << endl << "Numero de empleados: " << obtenerNumEmpleados() << "		Capacidad de clientes: " << obtenerCapClientes() << endl;
}
void Biblioteca::mostrarInformacionNueva() const {
	cout << "Registro" << endl;
	cout << "Nombre: " << obtenerNombre() << "		  Color: " << obtenerColor() << endl;
	cout << "Direccion: " << obtenerDireccion() << "	  Numero de empleados: " << obtenerNumEmpleados() << endl;
	cout << "Franquicia: " << obtenerFranquicia() << "		  Capacidad de clientes: " << obtenerCapClientes() << endl;;
	cout << "Estacionamiento " << obtenerEstacionamiento() << endl;
}