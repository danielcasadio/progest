#include <stdio.h>
#include <stdlib.h>

void ordena(int *vetor, int tamanho){
    int i, j, selecionado;
    if (tamanho == 0){
        printf("Não é possível ordenar um vetor vazio.");
    } else {
        
        for(i = 1; i < tamanho; i++){
            selecionado = vetor[i];
            j = i - 1;
            while((j>=0) && (selecionado<vetor[j])){
                vetor[j+1] = vetor[j];
                j--;
            }
            if (j != i-1){
                vetor[j+1] = selecionado;
            }            
        }
    }
}

int main(){
    int tamanho, indice;
    int vetor[5] = {3, 13, 10, 2, 1};
    tamanho = sizeof(vetor)/sizeof(int);
    for (indice = 0; indice < tamanho; indice++){
        printf("%d ", vetor[indice]);
    }
    printf("\n");
    ordena(vetor, tamanho);

    for (indice = 0; indice < tamanho; indice++){
        printf("%d ", vetor[indice]);
    }

    return 0;
}