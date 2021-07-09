#include <iostream>
#include <iomanip>
#include <string>
#include "Libro.h"

using namespace std;
unsigned int Libro::cuenta = 0;
unsigned int Libro::obtenerCuenta() {
	return cuenta;
}
Libro::Libro(string libro, string autor, string codigo, string categoria, int h, int m, int s) {
	establecerLibro(libro, autor, codigo, categoria, h, m, s);
	++cuenta;
}
void Libro::establecerLibro(string l, string a, string c, string ca, int hr, int mn, int sg) {
	establecerNombreLibro(l);
	establecerNombreAutor(a);
	establecerCodigo(c);
	establecerCategoria(ca);
	establecerHora(hr);
	establecerMinuto(mn);
	establecerSegundo(sg);
}
Libro::~Libro() {
	--cuenta;
}
void Libro::establecerNombreLibro(string libro) {
	nombreLibro = libro;
}
string Libro::obtenerNombreLibro() const {
	return nombreLibro;
}
void Libro::establecerNombreAutor(string autor) {
	nombreAutor = autor;
}
string Libro::obtenerNombreAutor() const {
	return nombreAutor;
}
void Libro::establecerCodigo(string codigo) {
	Codigo = codigo;
}
string Libro::obtenerCodigo() const {
	return Codigo;
}
void Libro::establecerCategoria(string categoria) {
	Categoria = categoria;
}
string Libro::obtenerCategoria() const {
	return Categoria;
}
void Libro::establecerHora(int h) {
	Hora = h;
}
unsigned int Libro::obtenerHora() const {
	return Hora;
}
void Libro::establecerMinuto(int m) {
	Minuto = m;
}
unsigned int Libro::obtenerMinuto() const {
	return Minuto;
}
void Libro::establecerSegundo(int s) {
	Segundo = s;
}
unsigned int Libro::obtenerSegundo() const {
	return Segundo;
}
void Libro::mostrarLibro() const {
	cout << "Libro: " << nombreLibro << endl << "Autor: " << nombreAutor << endl << "Codigo: " << Codigo << endl
		<< "Categoria: " << Categoria << endl;
	mirarHora();
}
void Libro::mirarHora() const {
	cout << "Hora en que se tomo el libro: "
		<< setfill('0') << setw(2) << obtenerHora() << ":"
		<< setw(2) << obtenerMinuto() << ":"
		<< setw(2) << obtenerSegundo() << endl << endl;
}
void Libro::registrar() {
	string lib, aut, cod, cat;
	int hr, mn, sg, respuesta;
	cout << "Nombre del libro: "; cin >> lib;
	cout << "Autor: "; cin >> aut;
	cout << "Codigo: "; cin >> cod;
	cout << "Categoria: "; cin >> cat;
	cout << "Tiempo en que se alquilo el libro (formato 24 horas):" << endl;
	cout << "Hora: "; cin >> hr;
	cout << "Minutos: "; cin >> mn;
	cout << "Segundos: "; cin >> sg;
	establecerLibro(lib, aut, cod, cat, hr, mn, sg);
	cout << "Desea ver el libro? Indique presionando 1 ";
	cin >> respuesta;
	if (respuesta == 1)
		mostrarLibro();
	else
		cout << "El alquiler de este libro ha quedado registrado" << endl;
	cout << endl;
}
void Libro::solicitarInformacion() {
	char r;
	int s = 0;
	do
	{
		cout << "Indique la opcion que desea ver: " << endl << "1 - Datos del libro" << endl
			<< "2 - Libro y hora en que fue alquilado" << endl << "3 - Salir" << endl;
		cin >> r;
		switch (r)
		{
		case '1':
			mostrarLibro();
			break;
		case '2':
			cout << nombreLibro << endl;
			mirarHora();
			break;
		case '3':
			s = 1;
			break;
		default:
			cout << "Opcion invalida" << endl;
			break;
		}
	} while (s == 0);

}
