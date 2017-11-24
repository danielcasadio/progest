#include <stdio.h>
#include <stdlib.h>

int troca(int* vetor, int a, int b){
    int aux = vetor[a];
    vetor[a] = vetor[b];
    vetor[b] = aux;
    return 0;
}

int mostra(int* vetor, int tamanho){
    int i;
    printf("------------------------------------\n");
    for(i = 0; i < tamanho; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");
    return 0;
}

int bubble(int* vetor, int tamanho){
    int i, j;
    mostra(vetor, tamanho);
    for(i = tamanho - 1; i > 0; i--){
        for(j = 0; j < tamanho - 1; j++){
            if(vetor[j] > vetor[j+1]){
                troca(vetor, j, j+1);
            }
        }
        mostra(vetor, tamanho);
    }
    printf("------------------------------------\n");
    return 0;
}

int main(){
    int i;
    int vetor[11] = {25, 14, 6, 9, 2, 47, 1, 85, 2, 4, 5};
    bubble(vetor, 11);
    return 0;
}
