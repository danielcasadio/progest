#include <stdio.h>
#include <stdlib.h>
#include "teste.h"

typedef struct pessoa{
    char * name;
    int age;
}Pessoa;

Pessoa * cria(char * n, int a ){
    Pessoa * new = (Pessoa *) malloc(sizeof(Pessoa));
    new->name = n;
    new->age = a;
    return new;
}

void mostra(Pessoa * p){
    if(p!= NULL){
        printf("%s | %i", p->name, p->age);
    }
}
