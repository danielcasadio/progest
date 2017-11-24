#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor, *addr, n, i, numero, aux, temp, qtd;
    printf("Digite a quantidade de numeros: \n");
    scanf(" %d", &n);
    vetor = (int *) malloc(n*sizeof(int));
    addr = &vetor;

    for(i = 0; i < n; i++){
        temp = 0;
        printf("Digite um valor para posicao %d: \n", i);
        scanf(" %d", &temp);
        *addr = temp;
        addr += sizeof(int);
    }

    printf("Escolha um numero para ser contado: \n");
    scanf(" %d", &numero);

    qtd = 0;
    addr = &vetor;
    printf("O numero %d aparece nos seguintes enderecos:\n", numero);
    for (i=0; i < n; i++) {
        aux = *addr;
        if(aux == numero){
            printf("%p\n", addr);
            qtd++;
        }
        addr+= sizeof(int);
    }
    addr = &vetor;
    printf("%d", qtd);
    free(vetor);
    return 0;
}
