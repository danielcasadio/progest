#include <stdio.h>
#include <stdlib.h>
#include "e4.h"

int main(){
    Fila * inteira = fila_start(inteira);
    Fila * par = fila_start(par);
    Fila * impar = fila_start(impar);
    int i;
    for(i = 1; i <= 15; i++){
        inteira = enqueue(inteira, i);
    }
    show(inteira);
    separa(inteira, par, impar);
}