#include <stdio.h>
#include "lista.h"

int main(){
    ListaInteiros* list = lista_cria();
    list = lista_insere_ordenado(list, 10);
    list = lista_insere_ordenado(list, 20);
    lista_imprime(list);
    list = lista_insere_ordenado(list, 5);
    list = lista_insere_ordenado(list, 40);
    lista_imprime(list);
    list = lista_remove_elemento(list, 20);
    lista_imprime(list);
    
}