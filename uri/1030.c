#include <stdlib.h>
#include <stdio.h>
#include "1030.h"

typedef struct unidade {
    int num;
    int morto;
    struct unidade* prox;
} Soldado;

int vazia (Soldado* s){
    return s == NULL;
}

Soldado* cria (Soldado* s){
    return NULL;
}

Soldado* adiciona(Soldado* s, int n, int k){
    Soldado* p = s;
    Soldado* novo = (Soldado *) malloc(sizeof(Soldado));
    novo->num = n;
    novo->morto = 0;
    if(vazia(s)){
        s = novo;
    } else {
        while(p->prox != NULL){
            p = p->prox;
        }
        p->prox = novo;
        if (n == k){
            novo->prox = s;
        }
    }
    return s;
}

void mostra (Soldado* s){
    Soldado* p;
    for (p = s; p->prox == s; p= p->prox){
        if(p->prox != s){
            printf ("%i -> ", p->num);
        }else{
            printf ("%i", p->num);
        }
        p = p->prox;
    }
}