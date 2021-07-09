#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>

class Biblioteca
{
public:
	//Biblioteca();
	explicit Biblioteca(std::string, std::string, std::string, std::string, std::string, int, int);
	void establecerBiblioteca(std::string, std::string, std::string, std::string, std::string, int, int);
	void establecerNombre(std::string);
	void establecerDireccion(std::string);
	void establecerFranquicia(std::string);
	void establecerEstacionamiento(std::string);
	void establecerColor(std::string);
	void establecerNumEmpleados(int);
	void establecerCapClientes(int);

	std::string obtenerNombre() const;
	std::string obtenerDireccion() const;
	std::string obtenerFranquicia() const;
	std::string obtenerEstacionamiento() const;
	std::string obtenerColor() const;
	int obtenerNumEmpleados() const;
	int obtenerCapClientes() const;

	void imprimirBiblioteca() const;
	void registrarBiblioteca();
	void imprimirDetalles() const;
	void mostrarInformacionNueva() const;

private:
	std::string nombre;
	std::string direccion;
	std::string franquicia;
	std::string estacionamiento;
	std::string color;
	int numEmpleados;
	int capClientes;
};

#endif // !BIBLIOTECA_H
