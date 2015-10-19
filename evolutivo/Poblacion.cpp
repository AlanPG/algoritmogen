//Poblacion.cpp
//Algoritmo Genetico

#include "Individuo.h"
#include "Poblacion.h"
#include <vector>

#define LONG_COD 20

std::vector<Individuo> Poblacion::getIndividuos(){
	return Individuos;
}

void Poblacion::setIndividuos(std::vector<Individuo> Individuo){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < LONG_COD; j++){
			Individuos[i].genotipo[j] = Individuo[i].genotipo[j];
		}
	}
}

void Poblacion::setSize(int tam){
	size = tam;
}

int Poblacion::getSize(){
	return Individuos.size();
}


