#include <iostream>
#include "Estante.h"
using namespace std;
unsigned int Estante::numeroEstantes = 0;

Estante::Estante(string ValorArea, int ValorPublicacion, string valorAutor, string MejorVendido, int valorEdad,
	int valorCantidad, int valorEntradas, int valorsalidas)
	:area(ValorArea), añoPublicacion(ValorPublicacion), autor(valorAutor), Best_seller(MejorVendido), edad(valorEdad),
	cantidadLibros(valorCantidad), entradas(valorEntradas), salidas(valorsalidas)
{
	numeroEstantes++;
}
void Estante::establecerArea(string ValorArea) {
	area = ValorArea;
}
string Estante::obtenerArea() const {
	return area;
}
void Estante::establecerPublicacion(int ValorPublicacion) {
	añoPublicacion = ValorPublicacion;
}
int Estante::obtenerPublicacion() const {
	return añoPublicacion;
}
void Estante::establecerAutor(string valorAutor) {
	autor = valorAutor;
}
string Estante::obtenerAutor() const {
	return autor;
}
void Estante::establecerBestSeller(string MejorVendido) {
	Best_seller = MejorVendido;
}
string Estante::obtenerBestSeller() const {
	return Best_seller;
}
void Estante::establecerEdad(int valorEdad) {
	edad = valorEdad;
}
int Estante::obtenerEdad() const {
	return edad;
}
void Estante::establecerCantidadLibros(int valorCantidad) {
	cantidadLibros = valorCantidad;
}
int Estante::obtenerCantidadLibros() const {
	return cantidadLibros;
}
void Estante::establecerEntradas(int valorEntradas) {
	entradas = valorEntradas;
}
int Estante::obtenerEntradas() const {
	return entradas;
}
void Estante::establecerSalidas(int valorsalidas) {
	salidas = valorsalidas;
}
int Estante::obtenerSalidas() const {
	return salidas;
}

void Estante::imprimir() const {
	cout << "Seccion: " << obtenerArea() << "\nAn~o de publicacion: " << obtenerPublicacion() <<
		"\n Autor: " << obtenerAutor() << "\n Mas vendidos: " << obtenerBestSeller() << "\n Rango de edad: " << obtenerEdad()
		<< "Cantidad de Libros agregados al estante" << obtenerEntradas()
		<< "/n Cantidad de libros vendidos en este estante" << obtenerSalidas()
		<< "\n Existencias en este estante: " << (obtenerCantidadLibros() + obtenerEntradas() - obtenerSalidas());
}