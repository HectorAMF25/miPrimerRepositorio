#include "Persona.h"
#include "Contenedor.h"
#include "Iterador.h"

using namespace std;

int main(int argc, char* argv[]) {

		IteradorA<Persona*>* iter = NULL; //No es un iterador, es un puntero
		IteradorA<Persona*>* iter2 = NULL;
		//Recorriendo una coleccion con el iterador
		ColeccionA<Persona>* CoA=new ColeccionA<Persona>(10);//objeto automatico
		Persona* per1 = new Persona("111", "Ana", 32);
		Persona* per2= new Persona("111", "Brithany", 50);
		Persona* per3= new Persona("111", "Carlos", 21);
		Persona* per4= new Persona("111", "Jimena", 34);
		Persona* per5= new Persona("111", "Nayeli", 34);
		Persona* per6= new Persona("111", "Hector", 20);
		//ingreso personas a la coleccion
		CoA->agregar(per1);
		CoA->agregar(per2);
		CoA->agregar(per3);
		CoA->agregar(per4);
		CoA->agregar(per5);
		//crear iterador que me recorrera esa coleccion
		iter = CoA->getObtenerIterador(); //iter pasa a ser un objeto dinamico
		cout << "Imprimiendo coleccion con el iterador 1" << endl;
		while (iter->masElementos())
		{
			cout << iter->proximoElemento()->toString()<<endl;
		}
		ColeccionA<Persona> *CoB=new ColeccionA<Persona>(CoA);
		CoB->agregar(per6);
		iter2=CoB->getObtenerIterador();
		cout <<endl<< "Imprimiendo coleccion con el iterador 2" << endl;
		while (iter2->masElementos())
		{
			cout << iter2->proximoElemento()->toString()<<endl;
		}
		
		
		delete CoA;
		delete CoB;
	system("pause>0");
	return 0;
}
