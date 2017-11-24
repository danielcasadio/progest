#include <stdio.h>

int main(){
    int n, m, i, j, k, soma, temp;
    int *vet;
    k = 1;
    scanf("%d %d", &n, &m);
    while((n !=0) && (m!=0)){
        vet = (int *)malloc()
        for(i = 0; i < n ; i+m){
            soma = 0;
            for(j = 0; j < m; j++){
                temp = 0;
                scanf("%d", &temp);
                soma += temp;
            }
            if(i == 0)
                printf("Teste %d\n", k);
            printf("%d ", soma/m);
        }
        printf("\n");
        k++;
        scanf("%d %d", &n, &m);
    }
}