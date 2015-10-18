//Individuo.cpp
//Algoritmo Genetico
//Author: Héctor Rodríguez González

#include "Individuo.h"


Individuo::Individuo(){    }


void Individuo::decoder(double*x,double*y,int genotipo[]){

    int i;
    *x = *y = 0.0;

    // calculo del primer decimal
    for(i=0; i<LONG_COD/2; i++)
        *x += genotipo[i] * pow(2, (LONG_COD/2)-(i+1));
    *x = (*x) * INTERVALO + LIMITE;

    //calculo del segundo decimal
    for(;i<LONG_COD;i++)
        *y += genotipo[i] * pow(2, LONG_COD-(i+1));
    *y = (*y) * INTERVALO + LIMITE;
}

double Individuo::fitness (double p1, double p2)
{
    return pow(p1,2) + pow(p2,2);
}

int* Individuo::crearIndividuo(int crom[]){

    int i;

    for (i=0; i<LONG_COD; i++)
        crom[i]=generarBinario();

    return crom;
}


double Individuo::getaptitud(){
     return aptitud;
}

int* Individuo::getgenotipo(){
    return genotipo;
}


void Individuo::setaptitud(double apt){
    aptitud=apt;
}
void Individuo::setgenotipo(int gen[]){
    int i;
    for(i=0;i<LONG_COD;i++)
        genotipo[i]=gen[i];

}


int Individuo::generarBinario(void){

        return rand()%2;
}


