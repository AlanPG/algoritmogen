//poblacion.h
//Algoritmo Genetico

#ifndef _Algoritmo_Genetico_Poblacion
#define _Algoritmo_Genetico_Poblacion

class Poblacion{
	private:
	std::list<Individuo> Individuos;
	int size;

	public:

	std::list<Individuo> getIndividuos();
	void setIndividuos(std::list<Individuo> Individuo);
	void setSize(int tam);
	int getSize();

};

#endif
