#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H
#include <string>
#include "Persona.h"

class Bibliotecario : public Persona
{
public:
	Bibliotecario(){};
	Bibliotecario(std::string, std::string, std::string, std::string, int, std::string, std::string, std::string, double = 0.0);
	~Bibliotecario();
	void establecerCodigoEmpleado(std::string);
	std::string obtenerCodigoEmpleado() const;
	void establecerNumeroSeguroSocial(std::string);
	std::string obtenerNumeroSeguroSocial() const;
	void establecerTelefono(std::string);
	std::string obtenerTelefono() const;
	void establecerSalario(double);
	double obtenerSalario() const;
	double obtenerAumento() const;
	virtual void mostrarInformacion() const override;
	void ImprimirAumento() const;
	double calcularNuevoSaldo() const;
	static unsigned int obtenerCuenta();
	

private:
	std::string codigoEmpleado;
	std::string numeroSeguroSocial;
	std::string Telefono;
	double Salario;
	static unsigned int cuenta;
};




#endif // !BIBLIOTECARIO_H
