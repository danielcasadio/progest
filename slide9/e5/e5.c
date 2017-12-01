#include <stdio.h>
#include <stdlib.h>
#include "e5.h"

//Definições de tipo

typedef struct elemento { 
    char info;
    struct elemento * prox;
} Elemento;

typedef struct pilha{
    Elemento * topo;
} Pilha;

typedef struct fila {
    Elemento * first;
    Elemento * last;
} Fila;

//Operações de pilha 

Pilha * start_pilha(){
    Pilha * p = (Pilha *) malloc (sizeof(Pilha));
    p->topo = NULL;
    return p;
}
Pilha * empilha (Pilha * n, char c){
    Elemento * novo = (Elemento *) malloc (sizeof(Elemento));
    novo->info = c;
    novo->prox = n->topo;
    n->topo = novo;
    return n;    
}
char desempilha (Pilha * n){
    if(vazia(n)){
        return -1;
    } else {
        Elemento * r = n->topo;
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
    Elemento * p = n->topo;
    while(p != NULL){
        printf("%c ", p->info);
        p = p->prox;
    }
}
void libera(Pilha * n){
    Elemento * run = n->topo;
    while(run != NULL){
        Elemento * aux = run->prox;
        free(run);
        run = aux;
    }
    free(n);
}

//Operações de fila

Fila * fila_start(){
    Fila * new = (Fila*) malloc(sizeof(Fila));
    new->first = new->last = NULL;
    return new;
}

Fila * enqueue(Fila * f, char v){
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

char dequeue(Fila * f){
    if(empty(f)) return -1;
    Elemento * deq = f->first;
    char info = deq->info;
    if(f->first == f->last) f->last = NULL;
    f->first = deq->prox;
    free(deq);
    return info;
}

int empty(Fila * f){
    if(f->first == NULL) return 1;
    return 0;
}

void showFila(Fila * f){
    if(!empty(f)){
        Elemento * e = f->first;
        printf("\n");
        while (e != NULL){
            printf("%c ", e->info);
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

Fila * put_letras(Fila * palavra, Fila * letras){
    Elemento * p = palavra->first;
    char k;
    while (p!=NULL){
        k = p->info;
        if(k > 57){
            letras = enqueue(letras, k);
        }
        p = p->prox;
    }
    return letras;
}

//Operações mistas
Fila * organiza(Fila * palavra, Fila * letras, Pilha * inteiros){
    Elemento * p = palavra->first;
    char k;
    while(p != NULL){
        k = p->info;
        if(k > 57){
            letras = enqueue(letras, k);
        } else if (47 < k && k < 58){
            inteiros = empilha(inteiros, k);
        }
        p = p-> prox;
    }
    freedom(palavra);
    palavra = fila_start();
    p = letras->first;
    while(p!=NULL){
        Elemento * aux = p;
        char k = p->info;
        palavra = enqueue(palavra, k);
        p = p->prox;
        free(aux);
    }
    p = inteiros->topo;
    while(p!=NULL){
        Elemento * aux = p;
        char k = p-> info;
        palavra = enqueue(palavra, k);
        p= p->prox;
        free(aux);
    }
    free(p);
    return palavra;
}