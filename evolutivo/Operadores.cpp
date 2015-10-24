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

vector<Individuo>Operadores::mutacion(vector<Individuo>hijos){
	Poblacion p;
	Individuo h;
	int *gen;
	int genotipo[LONG_COD];
	double x,y;
	int i, j;
	    for(i=0; i<2; i++){
	    	gen = hijos[i].getgenotipo();
	    	for(int j=0;j<LONG_COD;j++)
	    		genotipo[j] = *(gen+j);
	        for(j=0; j<LONG_COD; j++){
	            if ((double) rand()/(RAND_MAX+1.0) < P_MUTACION){
	                if(*(gen+j))
	                    *(gen+j) = 0;
	                else *(gen+j) = 1;
	            }
	        }
	        h.setgenotipo(gen);
	        h.decoder(&x,&y,h.getgenotipo());
	        h.setaptitud(h.fitness(x,y));
	        p.pob.push_back(h);
	    }
	    return p.getpob();
}

vector<Individuo>Operadores::cruza(vector<Individuo>seleccion){
	Individuo h;
	Poblacion p;
	int i, j, punto, aux,*gen1,*gen2;

	    double x, y;

	    for(i=0; i<2*(seleccion.size()/2); i+=2)
	    {
	        //if((double) rand()/(RAND_MAX+1.0) < P_CRUZA){
	        	gen1 = seleccion[i].getgenotipo();
	        	gen2 = seleccion[i+1].getgenotipo();
	            punto = 5;//(int) (((double) LONG_COD)*rand()/(RAND_MAX+1.0));

	            printf("Gen 1 : ");
	            for(int j=0;j<LONG_COD;j++)
	            	printf("%d",gen1[i]);
	            printf("\n");
	            printf("Gen 2 : ");
	            for(int j=0;j<LONG_COD;j++)
	            	printf("%d",gen2[i]);
	            printf("\n");
	            for(j=punto; j<LONG_COD; j++)
	            {
	                //aux=seleccion[i].genotipo[j];
	                //seleccion[i].genotipo[j]=seleccion[i+1].genotipo[j];
	                //seleccion[i+1].genotipo[j]=aux;
	            	aux=gen1[j];
	            	gen1[j]=gen2[j];
	            	gen2[j]=aux;
	            }
	            printf("Gen 1 : ");
	            for(int j=0;j<LONG_COD;j++)
	            	printf("%d",gen1[i]);
	            printf("\n");
	            printf("Gen 2 : ");
	            for(int j=0;j<LONG_COD;j++)
	            	printf("%d",gen2[i]);
	            printf("\n");
	            //mutacion(seleccion);

	            h.setgenotipo(gen1);
	            h.decoder(&x, &y, gen1);
	            h.setaptitud(h.fitness(x,y));
	            p.pob.push_back(h);
	            h.setgenotipo(gen2);
	            h.decoder(&x, &y, gen2);
	            h.setaptitud(h.fitness(x,y));
	            p.pob.push_back(h);

	        //}
	    }
	    return p.pob;
}

Individuo Operadores::elite(vector<Individuo>poblacion){
    int i;
    Individuo best = poblacion[0];

    for(i=0; i<POBLACION; i++)
        if(best.aptitud > poblacion[i].aptitud)
            best = poblacion[i];

    return best;
}

