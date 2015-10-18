//poblacion.h
//Algoritmo Genetico
//Author: Héctor Rodríguez González

#ifndef _Algoritmo_Genetico_Poblacion
#define _Algoritmo_Genetico_Poblacion

#include <stdio.h>

class Poblacion{
private:
    int numIndividuos;
    float numGeneraciones;
    Individuo[]poblacion;

public:
    Poblacion(){

    }

    Poblacion(int, float,Individuo[]){
        int getnumIndividuos();
        float getNumGeneraciones();
        Individuo[] getpoblacion();

        void setnumIndividuos(int);
        void setnumGeneraciones(float);
        void setpoblacion(Individuo[]);
    }
//    void creaPobInicial();
};
#endif 
