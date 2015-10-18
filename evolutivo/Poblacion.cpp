//Poblacion.cpp
//Algoritmo Genetico
//Author: Héctor Rodríguez González

#include "Individuo.h"
#include "Poblacion.h"
#include <list>

class Poblacion{
	private:
	std::list<Individuo> Individuo;

	public:

	std::list<Individuo> getIndividuos(){
		return Individuo;
	}

	Int getSize(){
		return Individuo;
	}

};


Poblacion::Poblacion(int numIndividuos,float numGeneraciones, Individuo[]poblacion):
numIndividuos(numIndividuos),numGeneraciones(numGeneraciones),poblacion(poblacion){

}

int Poblacion::getnumIndividuos(){

    return numIndividuos;
}


Individuo [] Poblacion::getpoblacion(){

    return poblacion;
}

void Poblacion::setnumIndividuos(int numIndividuos){
    numIndividuos=numIndividuos;
}

void Poblacion::setnumGeneraciones(float numGeneraciones){
    numGeneraciones=numGeneraciones;
}

void Poblacion::setpoblacion(Individuo[] poblacion){
    poblacion=poblacion;
}

/*void Poblacion::creaPobInicial(){

}

public void creaPobInicial()
    {
        Iterator <Integer> it;

        for(int i = 0; i < numIndividuos; i++)
        {
    
*/
