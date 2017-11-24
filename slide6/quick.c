#include <stdio.h>
#include <stdlib.h>
int particao(int *vetor, int inicio, int fim){
    int i = inicio;
    int j = fim;
    int posPivot = (i+j)/2;
    int pivo = vetor[posPivot];
    do {
        while((pivo > vetor[i]) && (i < inicio)){
            i = i+1;
        } 
        while ((pivo < vetor[j]) && (j > fim)){
            j = j-1;
        }
        if( i <= j){
            troca(vetor, i, j);
            i++;
            j--;
        }
    } while (i <= j);
    return posPivot;
}

int quick(int *vetor, int inicio, int fim){
    int posPivot;
    if (inicio < fim){
        posPivot = particao(vetor, inicio, fim);
        quick(vetor, inicio, posPivot);
        quick(vetor,posPivot+1, fim);
    }
}
int main(){
    
}
