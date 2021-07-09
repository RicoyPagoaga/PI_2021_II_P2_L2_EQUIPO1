#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
public:

	explicit Persona(std::string, std::string, std::string, std::string, int);
	void establecerPrimerNombre(std::string);
	std::string obtenerPrimerNombre() const;
	void establecerDNI(std::string);
	std::string obtenerDNI() const;
	void establecerApellidoPaterno(std::string);
	std::string obtenerApellidoPaterno() const;
	void establecerDireccion(std::string);
	std::string obtenerDireccion() const;
	void establecerEdad(int);
	int obtenerEdad() const;
	void registrarPersona();
	virtual void mostrarInformacion() const;
	Persona() {};
private:
	std::string primerNombre;
	std::string apellidoPaterno;
	std::string DNI;
	std::string direccion;
	int edad;
};

#endif // !PERSONA_H

