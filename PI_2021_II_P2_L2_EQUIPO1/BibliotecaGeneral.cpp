#include<iostream>
#include<iomanip>
#include<vector>
#include"Cliente.h"
#include"Biblioteca.h"
#include"Libro.h"
#include"Catalago.h"
#include"Computadoras.h"
#include "Bibliotecario.h"
using namespace std;
vector<Persona* > datos(3);
vector<Catalago*> catalagos(2);
vector<Bibliotecario* > empleados(5);
void virtualViaApuntador(const Bibliotecario* const claseBasePuntero) {
	claseBasePuntero->mostrarInformacion();
}
void virtualViaReferencia(const Bibliotecario& claseBaseReferencia) {
	claseBaseReferencia.mostrarInformacion();
}
int main() {
	catalagos[0] = new Catalago("Novelaligera", "Historico", "Trilogia", "Francisco de la mata", "2001",
		"2da edicion", 1234);
	catalagos[1] = new Catalago("Cuento", "suspenso", "Antologia", "Pancho", "1986",
		"6ta edicion", 5678);
	empleados[0] = new Bibliotecario("Mario", "Rivera", "0801-1998-13768", "Laureles", 23, "BE21", "0801-1998", "9509-7251", 7000);
	empleados[1] = new Bibliotecario("Rocio", "Espinoza", "0801-1996-86392", "Las Uvas", 25, "BE54", "0801-1996", "9722-5427", 15500);
	empleados[2] = new Bibliotecario("Carlos", "Funez", "0801-1989-13768", "Las Uvas", 32, "BE32", "0801-1989", "9624-1652", 9000);
	empleados[3] = new Bibliotecario("Carla", "Estrada", "0801-1985-13768", "Hato", 36, "BE55", "0801-1985", "9509-7121", 8000);
	empleados[4] = new Bibliotecario("Angel", "Botero", "0801-1991-13768", "Hato", 30, "BE77", "0801-1991", "9008-2197", 8500);
	Biblioteca local1("Central", "Ave. Rep. Panama", "Drama", "Si", "Amarillo Mostaza", 24, 36);
	Libro libro1("El conde de montecristo", "Alejandro Dumas", "AD01", "Ficcion", 10, 15, 04);
	Computadoras PC1("Vladimir", "Escoto", "2020110040", "Villalta", 45, "05", 4, 15.2);
	cout << "Bienvenido a la Bibliteca Nacional";
	int seleccion;
	do
	{
		cout << "\nSeleccione la opcion deseada:";
		cout << "\n1- Bibliotecas";
		cout << "\n2- Ventas";
		cout << "\n3- Alquiler";
		cout << "\n4- Empleados";
		cout << "\n5- Administracion";
		cout << "\n0- Salir" << endl;
		cin >> seleccion;
		switch (seleccion)
		{
		case 1: cout << "Informacion de Bibliotecas";
			char eleccion;
			cout << "\na- Establecer Informacion de Local"
				<< "\nb- Mostrar informacion de establecimiento" << endl;
			cin >> eleccion;
			switch (eleccion)
			{
			case 'a':
				local1.registrarBiblioteca();
				break;
			case'b':
				local1.imprimirBiblioteca();
				break;
			default:
				break;
			}
			cout << endl;
			break;
		case 2: cout << "Ventas";
			cout << "\na- Ingresar informacion de libro"
				<< "\nb- ver informacion de libro\n";
			cin >> eleccion;
			switch (eleccion)
			{
			case 'a':
				cout << "Ingrese informacion del libro a adquirir\n";
				libro1.registrar();
				break;
			case 'b':
				libro1.solicitarInformacion();
				break;
			default:
				break;
			}
			break;
		case 3: cout << "Alquiler" << endl;
			cout << "a- Alquiler de Libro"
				<< "\nb- Alquiler de computadora\n";
			cin >> eleccion;
			switch (eleccion)
			{
			case 'a': cout << "Alquiler de libro";
				cout << "Ingrese informacion del libro" << endl;
				break;
			case 'b': 
				cout << "Alquiler de computadora\n";
				PC1.Alquilar();
				break;
			default:
				break;
			}
			break;
			
		case 4:
			cout << "Bibliotecarios" << endl;
			for each (Bibliotecario * EmpleadoPuntero in empleados) {
				EmpleadoPuntero->mostrarInformacion();
			}
			cout << "El numero de bibliotecarios es: " << Bibliotecario::obtenerCuenta() << endl << endl;
			break;
		default:
			break;

		}

	} while (seleccion != 0);

	system("pause");
	return 0;
}