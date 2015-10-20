#include "Individuo.h"
#include "Poblacion.h"
#include "Operadores.h"
#include <vector>

#include "Poblacion.h"
#include "Individuo.h"
#include "Operadores.h"

#define POBLACION 10


int main(){
    Poblacion b,c,d;
    Operadores op;

    b.setpob(b.crearPoblacion(POBLACION));
    //printf("POBLACION:\n");
    //b.imprimePoblacion(b.getpob());
    printf("POBLACION SELECCIONADA:\n");
    c.crearPoblacion(POBLACION/2);
    c.setpob(op.seleccion(b.getpob()));
    c.imprimePoblacion(c.getpob());
    printf("POBLACION MUTADA:\n");
    op.mutacion(c.getpob());
    c.imprimePoblacion(c.getpob());


    return 0;
}
