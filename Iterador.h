#pragma once
using namespace std;
template<class T>
class IteradorA {
private:
	T** vec; //le asignamos un valor de objetos dinamicos (Persona)
	int i;
	int k;
public:
	IteradorA(T** v1, int can);
	virtual ~IteradorA();
	bool masElementos();
	T* proximoElemento();
	//void operator=(IteradorA* a);
};

template<class T>
inline IteradorA<T>::IteradorA(T** v1, int can)
{
	vec = v1; //le estamos asignando un vector al iterador (OJO, no estamos creando uno nuevo, solo apuntamos a uno)
	k = can; //el tamano del iterador sera hasta donde llege la cantidad de elementos del vector que recibe
	i = 0;
}

template<class T>
inline IteradorA<T>::~IteradorA()
{
	return (i < k);
}

template<class T>
inline bool IteradorA<T>::masElementos()
{
	T* r = NULL;
	if (masElementos()) {
		return r = vec[i++];
	}
	return r;//retorna algo
}

template<class T>
inline T* IteradorA<T>::proximoElemento()
{
	vec = a->vec;
	i = a->i;
	k = a->k;
}
