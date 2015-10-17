//Individuo.cpp
//Algoritmo Genetico
//Author: Héctor Rodríguez González 

//#include "Individuo.h"


#include <iostream>
#include <cstdlib>
#include <cmath>

#define LONG_COD 20
#define LIMITE 5.12
#define INTERVALO 10.24/pow(2,LONG_COD/2)

using namespace std;
//#define tamgen 10

class Individuo{
public:
    //int tamgen;
    int genotipo[LONG_COD];
    double aptitud;

public:
    //Individuo(int*,double);
    Individuo();

    int generarBinario(void);

    void decoder(double*,double*,int[]);
    double fitness (double,double);

    void crearIndividuo(int[]);


    double getaptitud();
    int* getgenotipo();

        void setaptitud(double apt);

};

int main(){

    Individuo ind;

    double x,y;


    ind.decoder(&x,&y,ind.genotipo);

    ind.aptitud=ind.fitness(x,y);
//    ind.setAptitud();





    return 0;
}



//void Individuo::setAptitud(double apt){
  //  aptitud=apt;
//}

    Individuo::Individuo(){

        genotipo=new int[LONG_COD];

    }



int Individuo::generarBinario(void){
   if (1 + (int)(10*rand()/(RAND_MAX+1)) > 5)
        return 1;
    else
        return 0;


}

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

void Individuo::crearIndividuo(int crom[]){


    int i;



    for (i=0; i<LONG_COD; i++)
        crom[i]=generarBinario();




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


int generarBinario(void){

    if(1+(int)(10*rand()/(RAND_MAX +1))>5)
        return 1;
    else
        return 0;
}


