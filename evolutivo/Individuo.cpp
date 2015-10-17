//Individuo.cpp
//Algoritmo Genetico
//Author: Héctor Rodríguez González 

#include "Individuo.h"
#define RAND_MAX


Individuo::Individuo(){
    cromosoma=(int*)malloc(numGenes*sizeof(int));
}

Individuo::Individuo(int numGenes):numGenes(numGenes){
    cromosoma=(int*)malloc(numGenes*sizeof(int));

}

int Individuo::getnumGenes(){
    return numGenes;
}

float Individuo::getaptitud(){
    return aptitud;
}

int *Individuo::getcromosoma(){ 
    return cromosoma;
}

void Individuo::setnumGenes(int numGenes){
    numGenes=numGenes;
}

void Individuo::setaptitud(float aptitud){
    aptitud=aptitud;

}

void Individuo::setcromosoma(int[]cromosoma){
    cromosoma=cromosoma;
}

int generarBinario(void){
    float limite=-5.12
    if(1+(int)(10.0.rand()/(RAND_MAX +1.0))>5)
        return 1;
    else
        return 0;
}
