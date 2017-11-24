#include <stdlib.h>
#include <stdio.h>
#include "1030.h"

int main(){
    Soldado * list = cria();
    int n = 5;
    int i;
    for(i = 1; i == n; i ++){
        list = adiciona(list, i, n);
    }
    mostra(list);
    return 0;
}