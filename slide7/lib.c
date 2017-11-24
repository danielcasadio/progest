#include <stdlib.h>
#include "lib.h"

int comprimento(char* str){
    int qtd = 0;
    while(str[qtd] != '\0'){
        qtd++;
    }
    qtd++;
    return qtd;
}

void copia(char* ori, char* dest){
    int tamanho = comprimento(ori);
    int i;
    for(i = 0; i < tamanho; i++){
        dest[i] = ori[i];
    }
}

void concat(char* ori, char* dest){
    int inicio = comprimento(ori) - 1;
    int fim = comprimento(ori) + comprimento(dest);
    int i, j;
    j = 0;
    for(i= inicio; i < fim + 1; i++){
        ori[i] = dest[j];
        j++;
    }


}