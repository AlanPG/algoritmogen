//Poblacion.cpp
//Algoritmo Genetico

#include "Individuo.h"
#include "Poblacion.h"

#define LONG_COD 20

Poblacion::Poblacion(){}

void Poblacion::imprimir(){
	for(int i=0; i<size ; i++){
		cout << "Genotipo"<< i << ": " << Individuos[i].getgenotipo() <<endl;
	}
}

std::vector<Individuo> Poblacion::getIndividuos(){
	return Individuos;
}

void Poblacion::crearIndividuos(){
	for(int i=0; i < size; i++){
		cout << "Genotipo antes: " << &Individuos[i].getgenotipo() <<endl;
		Individuos[i].setgenotipo(Individuos[i].crearIndividuo(Individuos[i].genotipo));
	}
}

void Poblacion::setIndividuos(std::vector<Individuo> Individuo){
	for(int i = 0; i < Individuos.size(); i++){
		for(int j = 0; j < LONG_COD; j++){
			Individuos[i].genotipo[j] = Individuo[i].genotipo[j];
		}
		Individuos[i].aptitud = Individuo[i].aptitud;
	}
}

void Poblacion::setSize(int tam){
	size = tam;
}

int Poblacion::getSize(){
	return Individuos.size();
}


