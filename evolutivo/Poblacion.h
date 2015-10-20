//Poblacion.h
//Algoritmo Genetico
//Authors: Héctor Rodríguez González/Alan Gustavo Plata Godinez
//

#ifndef _Algoritmo_Genetico_Poblacion
#define _Algoritmo_Genetico_Poblacion

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include "Individuo.h"
#include <stdio.h>

#define LONG_COD 20
#define POBLACION 10

using namespace std;

class Poblacion{
public:

    vector<Individuo>pob;


public:

    Poblacion();

    void setpob(std::vector<Individuo>);
    std::vector<Individuo> getpob();

    std::vector<Individuo> crearPoblacion();
    void imprimePoblacion(std::vector<Individuo>);

};

#endif

