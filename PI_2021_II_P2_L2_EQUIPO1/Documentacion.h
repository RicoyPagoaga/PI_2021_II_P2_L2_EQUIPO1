#ifndef DOCUMENTOS_H
#define DOCUMENTOS_H
#include <string>
#include "Persona.h"

class Documentacion : public Persona
{
public:
	Documentacion(std::string, std::string, std::string, std::string, int, std::string, int = 0, double = 0.0);
	virtual ~Documentacion() {};
	void establecerNombreLibro(std::string);
	std::string obtenerNombreLibro() const;
	void establecerDiasAlquiler(int);
	int obtenerDiasAlquiler() const;
	void establecerCostoAlquiler(double);
	double obtenerCostoAlquiler() const;
	double calcularTotal() const;
	void imprimir() const;

private:
	std::string nombreLibro;
	int diasAlquiler;
	double costoAlquiler;
};


#endif // !DOCUMENTOS_H

