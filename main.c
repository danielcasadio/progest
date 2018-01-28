#include <stdio.h>
#include <stdlib.h>
#include "teste.h"

int main(){
    char * n;
    n = (char *) malloc(33);
    scanf("%s", n);
    Pessoa * p = cria(n, 22);
    mostra(p);
    }
