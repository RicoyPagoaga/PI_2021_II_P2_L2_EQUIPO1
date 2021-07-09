#ifndef ESTANTE_H
#define ESTANTE_H
#include <iostream>
class Estante
{
public:
	Estante(std::string, int, std::string, std::string, int, int, int, int);
	void establecerArea(std::string);
	std::string obtenerArea()const;
	void establecerPublicacion(int);
	int obtenerPublicacion()const;
	void establecerAutor(std::string);
	std::string obtenerAutor()const;
	void establecerBestSeller(std::string);
	std::string obtenerBestSeller()const;
	void establecerEdad(int);
	int obtenerEdad()const;
	void establecerCantidadLibros(int);
	int obtenerCantidadLibros()const;
	void establecerEntradas(int);
	int obtenerEntradas()const;
	void establecerSalidas(int);
	int obtenerSalidas()const;
	virtual void imprimir() const;
private:
	std::string area;
	int añoPublicacion;
	std::string autor;
	std::string Best_seller;
	unsigned int edad;
	unsigned int cantidadLibros;
	unsigned int entradas;
	unsigned int salidas;
	static unsigned int numeroEstantes;
};
#endif // !ESTANTE_H
