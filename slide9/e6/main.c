#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    Fila * queue = start_fila();
    // queue = enqueue(queue,'a', 1);
    // queue = enqueue(queue,'b', 2);
    // queue = enqueue(queue,'c', 1);
    // queue = enqueue(queue,'a', 4);
    // queue = enqueue(queue,'b', 5);
    // queue = enqueue(queue,'d', 1);
    // showFila(queue);
    printf("%c\n", dequeue(queue));
    // printf("\n%c\n", dequeue(queue));
    // showFila(queue);
    free(queue);
}