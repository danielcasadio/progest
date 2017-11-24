#include <stdio.h>
#include <stdlib.h>
#include "lista_alunos.h"

typedef struct alunos{
    int id;
    char * nome;
    float notas[3];    
    struct alunos* prox;
}Aluno;

int vazia(Aluno* l){
    return (l == NULL);
}

int tamanho(Aluno* l){
    Aluno* p;
    int t = 0;
    for (p = l; p != NULL; p = p->prox){
        t++;
    }
    return t;
}

Aluno* criar(){
    return NULL;
}

Aluno* adiciona(Aluno* l){
    Aluno* p;
    int i = 1;
    int j;
    char nome[32];
    float notas[3];
    Aluno* novo =  (Aluno*) malloc(sizeof(Aluno));
    printf("Digite o nome: ");
    scanf("%s", novo->nome);
    scanf("%f %f %f", novo->notas[0], novo->notas[1], novo->notas[2]);
    novo->prox = NULL;
    if(vazia(l)){
        novo->id = i;
        return novo;
    } else {
        i++;
        p = l;
        while(p->prox != NULL){
            p = p->prox;
            i++;
        }
        p->prox = novo;
        novo->id = i;
        return l;
    }
}

Aluno* remove_aluno(Aluno* l, int i){
    Aluno* p = l;
    if(vazia(l)){
        printf("A lista esta vazia!");
    } else {
        while(p->prox->id != i){
            p = p->prox;
        }
        free(p->prox);
        p->prox = p->prox->prox;
    }
    return l;
}
float media(Aluno* l, int i){
    Aluno* p = l;
    if(vazia(l)){
        printf("A lista esta vazia!");
    } else {
        if( i <= tamanho(l)){
            float m = 0;
            int j;
            while(p->id != i){
                p = p->prox;
            }
            for(j = 0; j < 3; j++){
                m += p->notas[j];
            }
            return m/3;
        } else {
            printf("Aluno nao existe");
        }
    }
    return 0;
}
float media_turma(Aluno* l){
    Aluno* p = l;
    int t = tamanho(l);
    float m = 0;
    if(t){
        while(p->prox !=NULL){
            m += media(l, p->id);
            p = p->prox;
        }
    }
    return m/t;   
}
void info(Aluno* l, int i){
    Aluno* p = l;
    if (vazia(l)){
        printf("Lista vazia!");
    } else {
        while (p->id != i){
            p = p->prox;
        }
        printf("Nome: %s\n",  p->nome);
        printf("Notas: %.2f %.2f %.2f\n", p->notas[0], p->notas[1], p->notas[2]);
        printf("Media: %.2f", media(l, i));
    }
}

void mostra(Aluno* l){
    Aluno* p;
    for (p = l; p != NULL; p=p->prox){
        printf("Nome: %s\nID: %d\nNotas: %.2f %.2f %.2f\n", p->nome, p->id, p->notas[0], p->notas[1], p->notas[2]);
    }
    printf("\n");
}