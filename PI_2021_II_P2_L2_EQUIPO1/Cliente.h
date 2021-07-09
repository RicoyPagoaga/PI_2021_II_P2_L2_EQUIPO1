#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Persona.h"

class Cliente : public Persona
{
public:
	Cliente(std::string, std::string, std::string, std::string, int, std::string, std::string, double = 0.0);
	void establecerTicket(std::string);
	std::string obtenerCarnet()const;
	void establecerTipoCliente(std::string);
	std::string obtenerTipoCliente()const;
	void establecerDescuento(double);
	double obtenerDescuento()const;

	void imprimirCarnet() const;
	std::string inscribirTipoCliente()const;
	std::string validarCarnet() const;
	double asignarDescuento(std::string);
	virtual void mostrarInformacion() const override;

private:
	std::string carnetBibliotecario;
	std::string tipoCliente;
	double descuento;

};

#endif // !CLIENTE_H

