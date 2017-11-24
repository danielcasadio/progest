#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct lista {
    int info;
    struct lista* prox;
} ListaInteiros;

ListaInteiros* lista_cria(){
    return NULL;
}

ListaInteiros* lista_insere(ListaInteiros *l, int i){
    ListaInteiros* p_new = (ListaInteiros *) malloc(sizeof(ListaInteiros));
    p_new->info = i;
    p_new->prox = l;
    return p_new;
}

void lista_imprime(ListaInteiros* l){
    ListaInteiros* p;
    for (p = l; p != NULL; p=p->prox){
        printf("%d ", p->info);
    }
    printf("\n");
}

int lista_vazia(ListaInteiros* l){
    return (l == NULL);
}

ListaInteiros* lista_busca(ListaInteiros *l, int i){
    ListaInteiros* p;
    
    for (p = l; p != NULL; p=p->prox){
        if(p->info == i){
            return p;
        }
    }
}

ListaInteiros* lista_insere_ordenado(ListaInteiros *l, int v){
    ListaInteiros* ant = NULL; /* ponteiro para guardar o elemento que ficará antes do novo */
    
    ListaInteiros* p = l; // ponteiro para percorrer a lista
    while (p != NULL && p->info < v) { // percorre a lista até achar a posição correta
        ant = p;
        p = p->prox;
    }
    ListaInteiros* novo = (ListaInteiros*) malloc(sizeof(ListaInteiros)); // aloca espaço para onovo elemento
    novo->info = v; // insere a nova informação
    if (ant == NULL){ // elemento é o menor da lista: entrará...
        novo->prox = l; // na primeira posição e lista passará a
        l = novo; // apontar para ele
    }
    else {
        novo->prox = ant->prox; // elemento é inserido em alguma posição
        ant->prox = novo; // intermediária ou no fim da lista
    }
    return l;


    // ListaInteiros *p;
    // ListaInteiros* p_new = (ListaInteiros *) malloc(sizeof(ListaInteiros));
    // p_new->info = i;
    // if(!lista_vazia(l)){
    //     for (p = l; p != NULL; p=p->prox){
    //         if((p->prox)->info > i && p->info < i){
    //             p_new->prox = p->prox;
    //             p->prox = p_new;
    //         }
    //     }
    // }
    // return l;
}

ListaInteiros* lista_remove_elemento(ListaInteiros *l, int v){
    ListaInteiros* ant = NULL; // ponteiro para armazenar o elemento anterior
    ListaInteiros* p = l; // ponteiro para percorrer a lista
    while (p != NULL && p->info != v) { // não chegou no fim e não achou o elemento
    ant = p; // aponta para o próximo elemento
    p = p->prox;
    }
    if (p == NULL) // chegou no fim da lista e não achou o elemento
    return l; // a lista permanece a mesma
    if (ant == NULL) // (Caso 1) é o primeiro elemento, logo
    l = p->prox; // lista passa a apontar para o ex-segundo elemento
    else
    ant->prox = p->prox; /* (casos 2 e 3) corta a referência com o elemento
    
    encontrado */
    
    free(p); // libera o espaço alocado para o elemento
    return l;
}

void lista_exclui(ListaInteiros *l){
    ListaInteiros *p;
    for(p = l; p != NULL; p=p->prox){
        l = p->prox;
        free(p);
    }
}

int lista_conta(ListaInteiros *l){
    ListaInteiros *p;
    int cont = 0;
    if(!lista_vazia(l)){
        for(p=l; p!=NULL;p=p->prox){
            cont++;
        }
    }
    return cont;
}