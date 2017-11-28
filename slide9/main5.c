#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "filachar.h"



int main(){
    Fila * palavra = fila_start();
    Pilha * inteiros = cria();
    Fila * letras = fila_start();
    char * word;
    word = (char *) malloc (sizeof(char));
    int i;
    scanf("%[^\n]s", word);
    printf("%s", word);
    for(i = 0; i < sizeof(word); i++){
        palavra = enqueue(palavra, word[i]);
    }
    show(palavra);
    return 0;
}
