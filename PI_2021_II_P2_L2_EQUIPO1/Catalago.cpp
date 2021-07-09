#include<iostream>
#include "Catalago.h"
using namespace std;

Catalago::Catalago(string valortTipo, string valorTema, string valorSerie, string valorAutor, string valorPublicacion,
	string valorEdicion, int Isbn)
{
	documentoBibliografico = valortTipo;
	tema = valorTema;
	serie = valorSerie;
	autor = valorAutor;
	publicacion = valorPublicacion;
	edicion = valorEdicion;
	establecerNumeroIsbn(Isbn);
}

void Catalago::establecerDocumentoBibliografico(string ValorTipo) {
	documentoBibliografico = ValorTipo;
}
string Catalago::obtenerDocumentoBibliografico() const {
	return documentoBibliografico;
}
void Catalago::establecerTema(string valorAntologia) {
	tema = valorAntologia;
}
string Catalago::obtenerTema() const {
	return tema;
}
void Catalago::establecerSerie(string valorTrilogia) {
	serie = valorTrilogia;
}
string Catalago::obtenerSerie() const {
	return serie;
}
void Catalago::establecerAutor(string valorAutor) {
	autor = valorAutor;
}
string Catalago::obtenerAutor() const {
	return autor;
}
void Catalago::establecerPublicacion(string valorPublicacion) {
	publicacion = valorPublicacion;
}
string Catalago::obtenerPublicacion() const {
	return publicacion;
}
void Catalago::establecerEdicion(string valorEdicion) {
	edicion = valorEdicion;
}
string Catalago::obtenerEdicion() const {
	return edicion;
}
void Catalago::establecerNumeroIsbn(int valorIsb) {
	NumeroIsbn = valorIsb;
}
int Catalago::obtenerNumeroIsbn() const {
	return NumeroIsbn;
}
void Catalago::registrarCatalago() {
	cout << "Ingrese Titulo de libro: " << endl;
	cin >> documentoBibliografico;
	cout << "Ingrese Tema de libro" << endl;
	cin >> tema;
	cout << "Ingrese tipo de serie" << endl;
	cin >> serie;
	cout << "Ingrese nombre de autor" << endl;
	cin >> autor;
	cout << "Ingrese año de publicacion" << endl;
	cin >> publicacion;
	cout << "ingrese Edicion" << endl;
	cin >> edicion;
	cout << "Ingrese numero de Isbn" << endl;
	cin >> NumeroIsbn;
}
void Catalago::imprimir()const {
	cout << "Tipo de literatura: " << obtenerDocumentoBibliografico() << endl;
	cout << "Tema: " << obtenerTema() << "\nAutor: " << obtenerAutor() << "\nPublicacion: " << obtenerPublicacion()
		<< "\nEdicion: " << obtenerEdicion() << "\nNumero (ISB): " << obtenerNumeroIsbn();
}