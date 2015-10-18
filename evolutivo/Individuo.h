//Individuo.h
//Algoritmo Genetico
//Author: Héctor Rodríguez González

#ifndef _Algoritmo_Genetico_Individuo
#define _Algoritmo_Genetico_Individuo


#include <iostream>
#include <cstdlib>
#include <cmath>

#define LONG_COD 20
#define LIMITE 5.12
#define INTERVALO 10.24/pow(2,LONG_COD/2)

using namespace std;

class Individuo{
public:

    int genotipo[LONG_COD];
    double aptitud;

public:

    Individuo();

    int generarBinario(void);

    void decoder(double*,double*,int[]);
    double fitness (double,double);

    int* crearIndividuo(int[]);

    void setgenotipo(int[]);
    double getaptitud();
    int* getgenotipo();

        void setaptitud(double apt);

};

#endif

