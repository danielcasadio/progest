/*
Escreva os procedimentos de consulta,
insercao e remoçao de elementos em uma
lista duplamente encadeada. Qual o custo
de cadaprocedimento?
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int chave;
    struct no *ant;
    struct no *prox;
}No;

void printar(No *iniciodalista){
    No *temp;
    temp = iniciodalista;
    while (temp != NULL){
        printf("%d\n", temp->chave);
        temp = temp->prox;
    }
}

No * buscaeremove(int valor, No *iniciodalista){
    No *temp;
    temp = iniciodalista;
    if (iniciodalista == NULL) printf("lista vazia");
    else {
        while ((temp != NULL) && (temp->chave != valor)){
            temp = temp->prox;
        }
        if (temp->ant == NULL){
            iniciodalista = temp->prox;
            iniciodalista->ant = NULL;
            }
        else if (temp->prox == NULL){
            temp->ant->prox = NULL;
            
        }
        else {
            temp->ant->prox = temp->prox;
            temp->prox->ant = temp->ant;
        }
        free(temp);
	return iniciodalista;
    }
}


int main(){
    No *iniciodalista;
    No *novoitem;
    int valor;
    iniciodalista = (No*) malloc(sizeof(No));
    iniciodalista = NULL;
    scanf("%d", &valor);
    while (valor != -999){
        /* insere elemento no INICIO da lista */
        novoitem = (No*) malloc(sizeof(No));
        novoitem->chave = valor;
        novoitem->ant = NULL;
        novoitem->prox = iniciodalista;
        if (iniciodalista != NULL){
            iniciodalista->ant = novoitem;
        }
        iniciodalista = novoitem;

        scanf("%d", &valor);
    }

    printar(iniciodalista);


    printf("valor a ser removido: ");
    scanf("%d", &valor);
    iniciodalista = buscaeremove(valor, iniciodalista);


    printar(iniciodalista);


    return 0;
}