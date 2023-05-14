// pr_c_mysql.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Proveedores.h"
#include <iostream>
using namespace  std;

int main()
{

	string nit, nombres,direccion;
	int telefono,id;
	
	cout << "Ingrese Nombres:";
	getline(cin, nombres);
	cout << "Ingrese Nit:";
	getline(cin, nit);
	cout << "Ingrese Direccion:";
	getline(cin, direccion);
	cout << "Ingrese Telefono:";
	cin >> telefono;
	cin.ignore();
	cout << "Ingrese dato a borrar:";
	cin >> id;

	Proveedores c = Proveedores(nombres, direccion, telefono, nit,id);

	//c.crear();
	//c.leer();
	//c.Eliminar();
	c.Modificar();

	system("pause");
	return 0;

}