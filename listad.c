#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int chave;
	struct no *prox;
} No;

void printar(No* inicio){
	No* p = inicio; 
	if (p) do {
		printf("%d\n", p->chave);
		p = p->prox;
	} while (p!=inicio); 
}


int main(){
	No* inicio;
	No* novoitem;
	int valor;
	
	inicio = (No*) malloc(sizeof(No));
	inicio = NULL;
	
	scanf("%d", &valor);
	
	while (valor != -999){
		
		novoitem = (No*) malloc(sizeof(No));
		novoitem->chave = valor;
		
		/* se a lista esta vazia */
		if (inicio == NULL){
            novoitem->prox = novoitem;
            inicio = novoitem;
		}
		
		/* insercao no inicio */
		else {
			novoitem->prox = inicio->prox;
			inicio->prox = novoitem;
		}
		
		inicio = novoitem;
		scanf("%d", &valor);
	}
	inicio = inicio->prox;
	printar(inicio);
	
	printf("valor a ser removido: ");
	scanf("%d", &valor);
	No* p = inicio;
	No* ant;
    p = inicio;
    while (p->prox->chave != valor){ //busca o elemento que vem antes do que será excluido
        p = p->prox;
    } 
    No* lixo;
    lixo = p->prox; //coloca o primeiro elemento na variavel lixo
    p->prox = lixo->prox; //coloca o segundo elemento como proximo do ultimo
    inicio = p->prox; //muda o inicio para o segundo elemento, já que o primeiro será excluido
    free(lixo); //libera o antigo primeiro elemento
    // te amo <3 
	
	printar(inicio);
	
	return(0);
}