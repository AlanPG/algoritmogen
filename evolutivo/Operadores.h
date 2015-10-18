//Operadores.h
//Algoritmo Genetico
//Author: Héctor Rodríguez González Héctor


#ifndef _Algoritmo_Genetico_Operadores
#define _Algoritmo_Genetico_Operadores


#define POBLACION 10
#define P_MUTACION 0.001
#define P_CRUZA 0.3

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <list>
using namespace std;


class Operadores{
public:
	Operadores();

	std::list<Individuo>seleccion(std::list<Individuo>);

	void mutacion(std::list<Individuo>);

	void cruza(std::list<Individuo>);

	Individuo elite(std::list<Individuo>);

};

#endif 
