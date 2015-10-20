//Poblacion.cpp
//Algoritmo Genetico
//Authors: Héctor Rodríguez González/Alan Gustavo Plata Godinez
//

#include "Poblacion.h"
#include "Individuo.h"
#include "Operadores.h"


/*int main(){
    Poblacion b;
    b.imprimePoblacion(b.crearPoblacion());

    return 0;
}*/


Poblacion::Poblacion(){

    }

std::vector<Individuo> Poblacion::getpob(){
    return pob;
}

void Poblacion::setpob(vector<Individuo>poblacion){
    int i;
    for(i=0;i<POBLACION;i++){
        //pob[i]=poblacion[i];
    	Individuo ind;
    	ind.setgenotipo(poblacion[i].getgenotipo());
    	ind.setaptitud(poblacion[i].getaptitud());
    	pob.push_back(ind);
    }

}

std::vector<Individuo> Poblacion::crearPoblacion(){

    Poblacion a;
    Individuo ind;

    double x,y;


    for(int i=0;i<POBLACION;i++){

        ind.setgenotipo(ind.crearIndividuo(ind.genotipo));
        ind.decoder(&x,&y,ind.genotipo);
        ind.setaptitud(ind.fitness(x,y));
        a.pob.push_back(ind);
    }
    return a.pob;
}

void Poblacion::imprimePoblacion(std::vector<Individuo>ind){
    for(int i=0;i<ind.size();i++){
        printf("Individuo %d \n",i+1);
        printf("Aptitud: %lf \n",ind[i].getaptitud());
        printf("Cromosoma: ");
        for(int j=0;j<LONG_COD;j++)
        	printf("%d",ind[i].getgenotipo()[j]);
        printf("\n");

    }

}
