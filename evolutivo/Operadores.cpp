//operadores.cpp
//Algoritmo genetico
//Author: Héctor Rodríguez Gonźalez

#include "Operadores.h"
#include "Individuo.h"
#include "Poblacion.h"

Operadores::Operadores(){}

std::list<Individuo>Operadores::seleccion(std::list<Individuo>pob){
		Individuo a,b;
		int i;
		std::list<Individuo>select=(Individuo*)malloc(sizeof(Individuo)*POBLACION);

		for (i=0; i<POBLACION-1; i++)
		    {
		        a = pob[(int) (((double) POBLACION)*rand()/(RAND_MAX+1.0))];
		        b = pob[(int) (((double) POBLACION)*rand()/(RAND_MAX+1.0))];

		        if (a.aptitud < b.aptitud)
		            select[i] = a;
		        else
		            select[i] = b;
		    }

		    return select;
	}

void Operadores::mutacion(std::list<Individuo>hijos){

	int i, j;
	    for(i=0; i<2; i++)
	        for(j=0; j<LONG_COD; j++)
	            if ((double) rand()/(RAND_MAX+1.0) < P_MUTACION)
	            {
	                if(hijos[j].genotipo[j])
	                    hijos[i].genotipo[j] = 0;
	                else hijos[i].genotipo[j] = 1;
	            }



}

void Operadores::cruza(std::list<Individuo>seleccion){
	int i, j, punto, aux;

	    double x, y;

	    for(i=0; i<POBLACION-1; i+=2)
	    {
	        if((double) rand()/(RAND_MAX+1.0) < P_CRUZA)
	        {
	            punto = (int) (((double) LONG_COD)*rand()/(RAND_MAX+1.0));

	            for(j=punto; j<LONG_COD; j++)
	            {
	                aux=seleccion[i].genotipo[j];
	                seleccion[i].genotipo[j]=seleccion[i+1].genotipo[j];
	                seleccion[i+1].genotipo[j]=aux;
	            }

	            mutacion(&seleccion[i]);

	            decoder(&x, &y, seleccion[i].genotipo);
	            seleccion[i].aptitud = fitness(x,y);

	            decoder(&x, &y, seleccion[i+1].genotipo);
	            seleccion[i+1].aptitud = fitness(x,y);
	        }
	    }
}

Individuo Operadores::elite(std::list<Individuo>poblacion){
    int i;
    Individuo best = poblacion[0];

    for(i=0; i<POBLACION; i++)
        if(best.aptitud > poblacion[i].aptitud)
            best = poblacion[i];

    return best;
}

