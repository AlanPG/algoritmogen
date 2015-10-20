//operadores.cpp
//Algoritmo genetico
//Author: Héctor Rodríguez Gonźalez

#include "Operadores.h"
#include "Individuo.h"
#include "Poblacion.h"

Operadores::Operadores(){}

vector<Individuo>Operadores::seleccion(vector<Individuo>pob){
		Individuo a,b;
		int i;
		Poblacion select;
		//vector<Individuo>select=(Individuo*)malloc(sizeof(Individuo)*POBLACION);

		for (i=0; i<(pob.size())/2; i++)
		    {
		        a = pob[(int) (((double) POBLACION)*rand()/(RAND_MAX+1.0))];
		        b = pob[(int) (((double) POBLACION)*rand()/(RAND_MAX+1.0))];

		        if (a.getaptitud() < b.getaptitud()){
		            select.pob.push_back(a);
		        }
		        else{
		            select.pob.push_back(b);
		        }
		    }

		    return select.pob;
	}

void Operadores::mutacion(vector<Individuo>hijos){

	int i, j;
	    for(i=0; i<2; i++){
	        for(j=0; j<LONG_COD; j++){

	            if ((double) rand()/(RAND_MAX+1.0) < P_MUTACION)
	            {
	                if(hijos[j].genotipo[j])
	                    hijos[i].genotipo[j] = 0;
	                else hijos[i].genotipo[j] = 1;
	            }

	        }
	    }
}

void Operadores::cruza(vector<Individuo>seleccion){
	Individuo h;

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

	            mutacion(seleccion);

	            h.decoder(&x, &y, seleccion[i].genotipo);
	            seleccion[i].aptitud = h.fitness(x,y);
	            h.decoder(&x, &y, seleccion[i+1].genotipo);
	            seleccion[i+1].aptitud = h.fitness(x,y);
	        }
	    }
}

Individuo Operadores::elite(vector<Individuo>poblacion){
    int i;
    Individuo best = poblacion[0];

    for(i=0; i<POBLACION; i++)
        if(best.aptitud > poblacion[i].aptitud)
            best = poblacion[i];

    return best;
}

