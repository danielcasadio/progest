#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha * stack = cria();
    stack = empilha(stack, 'l');
    stack = empilha(stack, 'e');
    stack = empilha(stack, 'i');
    stack = empilha(stack, 'n');
    stack = empilha(stack, 'a');
    stack = empilha(stack, 'D');
    printf("\n");
    mostra(stack);
    printf("\n");
    printf("%c", desempilha(stack));
    printf("%c", desempilha(stack));
    printf("%c", desempilha(stack));
    printf("%c", desempilha(stack));
    printf("\n");
    mostra(stack);
    printf("\n");
    libera(stack);
}