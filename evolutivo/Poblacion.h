//poblacion.h
//Algoritmo Genetico

#ifndef _Algoritmo_Genetico_Poblacion
#define _Algoritmo_Genetico_Poblacion
#include "Individuo.h"
#include <vector>
#define LONG_COD 20

class Poblacion{
	private:
	std::vector<Individuo> Individuos;
	int size = 10;

	public:
	Poblacion();
	void crearIndividuos();
	std::vector<Individuo> getIndividuos();
	void setIndividuos(std::vector<Individuo> Individuo);
	void setSize(int tam);
	void imprimir();
	int getSize();

};

#endif
