#pragma once
#include <iostream>
using namespace std;
#include <sstream>



class Persona {
private:
	string nombre;
	string ID;
	int edad;
public:
	Persona() :nombre(""), ID(""), edad(0) {}
	Persona(string n, string id, int age) :nombre(n), ID(id), edad(age) {}
	virtual ~Persona() {}
	string toString() {
		stringstream ss;
		ss << "Nombre: " << nombre << endl;
		ss << "IDL " << ID << endl;
		ss << "EdadL "<<edad << endl;
		return ss.str();
	}
};