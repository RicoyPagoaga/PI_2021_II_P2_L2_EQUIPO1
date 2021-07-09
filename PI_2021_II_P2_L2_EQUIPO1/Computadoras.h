#ifndef COMPUTADORAS_H
#define COMPUTADORAS_H
#include <string>
#include "Persona.h"

class Computadoras : public Persona
{
public:
	Computadoras(std::string, std::string, std::string, std::string, int, std::string, int, double = 0.0);
	//~Computadoras();
	void establecerComputadora(std::string);
	std::string obtenerComputadora() const;
	void establecerHoraUso(int);
	int obtenerHoraUso() const;
	void establecerCostoHora(double);
	double obtenerCostoHora() const;
	void Computadoras::Alquilar();
	double calcularTotal() const;
	void imprimir() const;
private:
	std::string computadora;
	int horaUso;
	double costoHora;
};


#endif // !COMPUTADORAS_H

