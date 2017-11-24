#include <stdio.h>
#include <stdlib.h>

void conta(){
    int carneiros, quantidade, i, j, k, l;
    int unicos[10000];
    char entrada[10000];
    char *temp;


    scanf("%i", &carneiros);
    scanf("%s", entrada);
    j = 0;
    k = 0;
    temp = '0';

    while(entrada[j] != '\0'){
        if (entrada[j] != ' '){
            temp = entrada[j];
        } else {
            unicos[k] = (int) temp;
            temp = '0';
        }
        k++;
        j++;
    }
//    printf("%s", entrada);
//    for (l = 0; l < carneiros; l++){
//        printf("%i ", unicos[i]);
//    }
}
int main(){
//    int times, a;
//
//    scanf("%i", &times);
//    for(a = 0; a < times; a++){
//        conta();
//    }
    conta();
    return 0;
}
