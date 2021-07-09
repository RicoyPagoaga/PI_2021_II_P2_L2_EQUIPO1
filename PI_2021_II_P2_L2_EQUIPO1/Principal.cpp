#include <iostream>
#include <stdexcept>
#include <vector>
#include <iomanip>
#include "Persona.h"
#include "Biblioteca.h"
#include "Bibliotecario.h"
#include "Catalago.h"
#include "Cliente.h"
#include "Computadoras.h"
#include "Documentacion.h"
#include "Estante.h"
#include "Libro.h"

using namespace std;
vector<Persona*> clientes(4);
//void llenarCliente() {
//
//}
vector<Catalago*> catalagos(2);
int main() {
	char op;
	string carnetTipoC, TipoC;
	double descuento;
	//clientes[0] = new Cliente(string nombre, string apellido, string DNI, string direccion, int edad, string ticket, string tipoC, double des);
	Biblioteca biblioteca("Lector viviente", "Col. la soledad", "Ab12", "Incluido", "Beige", 10, 3);
	catalagos[0] = new Catalago("Novelaligera", "Historico", "Trilogia", "Francisco de la mata", "2001",
		"2da edicion", 1234);
	catalagos[1] = new Catalago("Cuento", "suspenso", "Antologia", "Pancho", "1986",
		"6ta edicion", 5678);
	Cliente Cliente1("Juan", "Alvarez", "080120011452", "Col. Kennedy", 20, "", "", 0.0);
	cout << "Eliija una opcion: " << "\n1- Editar informacion biblioteca " << "\n2- Ticket"<<"/n 3- ver Catalago";
	cin >> op;
	switch (op)
	{
	case 1:
		biblioteca.registrarBiblioteca();
		break;
	case 2:
		carnetTipoC=Cliente1.validarCarnet();
		Cliente1.establecerTicket(carnetTipoC);
		TipoC = Cliente1.inscribirTipoCliente();
		Cliente1.establecerTipoCliente(TipoC);
		descuento = Cliente1.asignarDescuento(TipoC);
		Cliente1.establecerDescuento(descuento);
	case 3:
		for each (Catalago * catalagoPuntero in catalagos)
		{
			catalagoPuntero->imprimir();
			cout << endl;
		}
	default:
		break;
	}
	system("pause");
	return 0;
}
