#include <stdio.h>

int main(){
    int i, aux1, aux2, n;
    n = 5;
    int v1[n], v2[n], v3[n];

    for (i = 0; i < n; i++){
        aux1 = 0;
        printf("Digite um valor para o indice %d para o vetor 1: ", i);
        scanf("%d", aux1);
        v1[i] = aux1;

    }
    for (i=0; i < n; i++){
        aux2 = 0;
        printf("Digite um valor para o indice %d para o vetor 2: ", i);
        scanf("%d", aux2);
        v2 [i] = aux2;
    }

    for (i = 0; i < n; i++){
        v3[i] = v1[i]*v2[i];
    }

    for (i = 0; i < n; i++){
        printf("%i %i ", v1[i], v2[i]);
        if (v3[i] != 0)
            printf("%i\n", v3[i]);
    }

    return 0;
}
