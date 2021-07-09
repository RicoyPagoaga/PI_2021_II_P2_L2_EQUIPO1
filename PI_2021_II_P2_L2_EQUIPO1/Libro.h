#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
class Libro
{
public:
	Libro() {};
	~Libro();
	Libro(std::string, std::string, std::string, std::string, int = 0, int = 0, int = 0);
	void establecerLibro(std::string, std::string, std::string, std::string, int = 0, int = 0, int = 0);
	void establecerNombreLibro(std::string);
	std::string obtenerNombreLibro() const;
	void establecerNombreAutor(std::string);
	std::string obtenerNombreAutor() const;
	void establecerCodigo(std::string);
	std::string obtenerCodigo() const;
	void establecerCategoria(std::string);
	std::string obtenerCategoria() const;
	void establecerHora(int);
	void establecerMinuto(int);
	void establecerSegundo(int);
	unsigned int obtenerHora() const;
	unsigned int obtenerMinuto() const;
	unsigned int obtenerSegundo() const;
	void registrar();
	void mostrarLibro() const;
	void solicitarInformacion();
	void mirarHora() const;
	static unsigned int obtenerCuenta();
private:
	std::string nombreLibro;
	std::string nombreAutor;
	std::string Codigo;
	std::string Categoria;
	unsigned int Hora;
	unsigned int Minuto;
	unsigned int Segundo;
	static unsigned int cuenta;
};

#endif // !LIBRO_H

