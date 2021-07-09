#ifndef CATALAGO_H
#define CATALAGO_H

#include <iostream>
#include <string>

class Catalago
{
public:
	Catalago(std::string, std::string, std::string, std::string, std::string, std::string, int);
	//~Catalago();
	void establecerDocumentoBibliografico(std::string);
	std::string obtenerDocumentoBibliografico()const;
	void establecerTema(std::string);
	std::string obtenerTema()const;
	void establecerSerie(std::string);
	std::string obtenerSerie()const;
	void establecerAutor(std::string);
	std::string obtenerAutor()const;
	void establecerPublicacion(std::string);
	std::string obtenerPublicacion()const;
	void establecerEdicion(std::string);
	std::string obtenerEdicion()const;
	void establecerNumeroIsbn(int);
	int obtenerNumeroIsbn()const;
	void registrarCatalago();
	virtual void imprimir() const;

private:
	std::string documentoBibliografico;
	std::string tema;
	std::string serie;
	std::string autor;
	std::string publicacion;
	std::string edicion;
	int NumeroIsbn;
};

#endif // !CATALAGO_H
