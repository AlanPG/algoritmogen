//poblacion.h
//Algoritmo Genetico

#ifndef _Algoritmo_Genetico_Poblacion
#define _Algoritmo_Genetico_Poblacion
#include <vector>

class Poblacion{
	private:
	std::vector<Individuo> Individuos;
	int size;

	public:

	std::vector<Individuo> getIndividuos();
	void setIndividuos(std::vector<Individuo> Individuo);
	void setSize(int tam);
	int getSize();

};

#endif
