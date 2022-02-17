#include "Cliente.cpp"
#include <iostream>
using namespace std;

main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombre: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//instancia de un objeto
	Cliente obj= Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	obj.setNombre(nombres);
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	obj.setApellidos(apellidos);
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	obj.setDireccion(direccion);
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	obj.setTelefono(telefono);
	cout<<"Datos del Cliente: "<< obj.getNit()<<","<<obj.getNom()<<","<<obj.getApe()<<","<<obj.getDir()<<","<<obj.getTel()<<endl;
	//obj.mostrar();
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombre(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
	
}