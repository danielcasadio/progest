#include <stdio.h>
#include <stdlib.h>
#include "e5.h"

int main(){
    Fila * palavra = fila_start();
    Pilha * inteiros = start_pilha();
    Fila * letras = fila_start();
    palavra = enqueue(palavra, 'A');
    palavra = enqueue(palavra, '1');
    palavra = enqueue(palavra, '2');
    palavra = enqueue(palavra, 'E');
    palavra = enqueue(palavra, '5');
    palavra = enqueue(palavra, 'T');
    palavra = enqueue(palavra, '0');
    palavra = enqueue(palavra, 'W');
    palavra = enqueue(palavra, '9');
    palavra = enqueue(palavra, 'G');
    showFila(palavra);
    palavra = organiza(palavra, letras, inteiros);
    showFila(palavra);
    return 0;
}
