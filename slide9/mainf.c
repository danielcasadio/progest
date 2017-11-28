#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    Fila * fila = fila_start();
    fila = enqueue(fila, 0.5);
    fila = enqueue(fila, 1.5);
    fila = enqueue(fila, 2.5);
    fila = enqueue(fila, 3.5);
    fila = enqueue(fila, 4.5);
    show(fila);
    printf("%.2f ", dequeue(fila));
    printf("%.2f ", dequeue(fila));
    printf("%.2f ", dequeue(fila));
    show(fila);
    freedom(fila);
}