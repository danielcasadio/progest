#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no{
    char info;
    int prrt; //prioridade; onde 1 eh maior e 10 eh a menor
    struct no * next;
}No;

typedef struct fila{
    No * first;
    No * last;
}Fila;

Fila * start_fila(){
    Fila * f = (Fila *) malloc(sizeof(Fila));
    f->first = NULL;
    f->last = NULL;
    return f;
}

Fila * enqueue(Fila * f, char c, int p){
    No * new = (No *) malloc (sizeof(No));
    new->info = c;
    new->prrt = p;
    if(vazia(f)){
        new->next = NULL;
        f->first = new;
        f->last = new;
    } else {
        No * x = f->first;
        while((x->next != NULL) && (x->next->prrt <= p)){
            x = x->next;
        }
        if (x->next == NULL){
            x->next = new;
            f->last = new;
            new->next = NULL;
        } else {
            new->next = x->next;
            x->next = new;
        }
    }
    return f;
}

int vazia (Fila * f){
    if((f->first == f->last) && (f->last == NULL))return 1;
    return 0;
}

char dequeue(Fila * f){
    if(vazia(f)){
        printf("Fila vazia!");
        return -1;
    }else{
        No * new = f->first->next;
        No * lixo = f->first;
        f->first = new;
        char c = lixo->info;
        free(lixo);
        return c;
    } 
}

void showFila(Fila * f){
    No * runner = f->first;
    while(runner->next != NULL){
        printf("[%c, %i] -> ", runner->info, runner->prrt);
        runner = runner->next;
    }
    printf("[%c, %i]", runner->info, runner->prrt);
    runner = runner->next;
    free(runner);
} 

void libera(Fila * f){
    if(vazia(f)) printf("Fila vazia!");
    else {
        No * runner = f->first;
        while(runner != NULL){
            No * aux = runner;
            runner = runner->next;
            free(aux);        
        }
        free(f);
        printf("Fila limpa com sucesso.");
    }
}