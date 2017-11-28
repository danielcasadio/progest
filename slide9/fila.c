#include <stdio.h>
#include <stdlib.h>

typedef struct elemento { 
    float info;
    struct elemento * prox;
} Elemento;

typedef struct fila {
    Elemento * first;
    Elemento * last;
} Fila;

Fila * fila_start(){
    Fila * new = (Fila*) malloc(sizeof(Fila));
    new->first = new->last = NULL;
    return new;
}

Fila * enqueue(Fila * f, float v){
    Elemento * new = (Elemento*) malloc(sizeof(Elemento));
    new->info = v;
    new->prox = NULL;
    if(!empty(f)){
        f->last->prox = new;
    } else {
        f->first = new;
    }
    f->last = new;
    return f;    
}

float dequeue(Fila * f){
    if(empty(f)) return -1;
    Elemento * deq = f->first;
    float info = deq->info;
    if(f->first == f->last) f->last = NULL;
    f->first = deq->prox;
    free(deq);
    return info;
}

int empty(Fila * f){
    if(f->first == NULL) return 1;
    return 0;
}

void show(Fila * f){
    if(!empty(f)){
        Elemento * e = f->first;
        printf("\n");
        while (e != NULL){
            printf("%.2f ", e->info);
            e = e->prox;
        }
        printf("\n");
    }
}

void freedom(Fila * f){
    Elemento * e = f->first;
    while (e != NULL){
        Elemento * aux = e->prox;
        free(e);
        e = aux;
    }
    free(f);
}