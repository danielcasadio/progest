#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    int** matriz;
    printf("Digite o numero de linhas: ");
    scanf("%i", &n);
    matriz = (int **) malloc(n*sizeof(int *));
    for(i = 0; i < n; i++){
        matriz[i] = (int *)malloc(n*sizeof(int));
        for(j = 0; j < n; j++){
            matriz[i][j] = (i+1)*(j+1);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%2i ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}