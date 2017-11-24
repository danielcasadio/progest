#include <stdio.h>
#include <stdlib.h>

int mostra(int *vetor, int tamanho){
    int i;
    printf("\n");
    for(i = 0; i < tamanho; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");
    return 0;
}

int troca(int *vetor, int a, int b){
    int aux = vetor[a];
    vetor[a] = vetor[b];
    vetor[b] = aux;
    return 0;
}

int selection_sort(int* vetor, int tamanho){
    int i, j, k, menor;
    for(i = 0; i < tamanho; i++){
        menor = vetor[i];
        k = i;
        for (j = i; j < tamanho; j++){
            if(vetor[j]<menor){
                menor = vetor[j];
                k = j;
            }
        }
        if (vetor[k] < vetor[i])
            troca(vetor, i, k);
        mostra(vetor, 11);
    }
    return 0;
}

int selection(int *vetor, int tamanho){
    int i, j, k, menor;
    for(i = 0; i < tamanho; i++){
        menor = vetor[i];
        k = i;
        for (j = i; j < tamanho; j++){
            if(vetor[j]<menor){
                menor = vetor[j];
                k = j;
            }
        }
        if (vetor[k] < vetor[i])
            troca(vetor, i, k);
        mostra(vetor, 11);
    }
    return 0;
}


int main(){
    int i;
    int vetor[11] = {25, 14, 6, 9, 2, 47, 1, 85, 2, 4, 5};
    selection_sort(vetor, 11);
    printf("\n");
    return 0;
}
