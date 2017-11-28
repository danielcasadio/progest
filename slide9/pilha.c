#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no{
    char info;
    struct no * prox;
}No;

typedef struct pilha{
    No * topo;
} Pilha;


Pilha * cria (){
    Pilha * p = (Pilha *) malloc (sizeof(Pilha));
    p->topo = NULL;
    return p;
}
Pilha * empilha (Pilha * n, char c){
    No * novo = (No *) malloc (sizeof(No));
    novo->info = c;
    novo->prox = n->topo;
    n->topo = novo;
    return n;    
}
char desempilha (Pilha * n){
    if(vazia(n)){
        return -1;
    } else {
        No * r = n->topo;
        char c = r->info;
        n->topo = r->prox;
        free(r);
        return c;
    }
}
int vazia (Pilha * n){
    if(n->topo == NULL) return 1;
    return 0;
}
void mostra (Pilha * n) {
    No * p = n->topo;
    while(p != NULL){
        printf("%c\n", p->info);
        p = p->prox;
    }
}
void libera(Pilha * n){
    No * run = n->topo;
    while(run != NULL){
        No * aux = run->prox;
        free(run);
        run = aux;
    }
    free(n);
}