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
#include <vector>
#include "Individuo.h"
using namespace std;


class Operadores{
public:
	Operadores();

	vector<Individuo>seleccion(vector<Individuo>);

	void mutacion(vector<Individuo>);

	void cruza(vector<Individuo>);

	Individuo elite(vector<Individuo>);

};

#endif
