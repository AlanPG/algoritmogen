//Poblacion.cpp
//Algoritmo Genetico

#include "Individuo.h"
#include "Poblacion.h"
#include <list>

std::list<Individuo> Poblacion::getIndividuos(){
	return Individuos;
}

void Poblacion::setIndividuos(std::list<Individuo> Individuo){
	for(int i = 0; i < size; i++){
		Individuos[i].genotipo = Individuo[i].genotipo;
	}
}

void Poblacion::setSize(int tam){
	size = tam;
}

int Poblacion::getSize(){
	return Individuos.size();
}


