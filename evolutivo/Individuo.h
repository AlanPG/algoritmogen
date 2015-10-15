//Individuo.h
//Algoritmo Genetico
//Author: Héctor Rodríguez González

#ifndef _Algoritmo_Genetico_Individuo
#define _Algoritmo_Genetico_Individuo

#include <iostream>
#include <cstdlib>
#include <cmath>

class Individuo{
private:
    int numGenes;
    float aptitud;
    int *cromosoma;

public:
    Individuo(){
//        cromosoma[numGenes];
    }

    Individuo(int){
        int getnumGenes();
        int *getcromosoma();
        float getaptitud();

        void setnumGenes(int);
        void setcromosoma(int[]);
        void setaptitud(float);
    }

    int generarBinario(void);

    void decoder(double*,double*,int*);

    


};

#endif
