#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
	//atributos
	private : 	string nit; 
	
	//constructor
	public :
	Cliente(){
	}
	
	Cliente(string nom,string ape,string dir, int tel, string n) : Persona(nom,ape,dir,tel){
		nit=n;
	}
	//metodos
	//set(modificar)
	void setNit(string n){
		nit=n;
	}
	void setNombre(string nom){
		nombres=nom;
	}
	void setApellidos(string ape){
		apellidos=ape;
	}
	void setDireccion(string dir){
		direccion=dir;
	}
	void setTelefono(int tel){
		telefono=tel;
	}
	
	//get(mostrar)
	string getNit(){
		return nit;
	}
	string getNom(){
		return nombres;
	}
	string getApe(){
		return apellidos;
	}
	string getDir(){
		return direccion;
	}
	int getTel(){
		return telefono;
	}
	
	//metdos
	void mostrar(){
		cout<<"____________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};