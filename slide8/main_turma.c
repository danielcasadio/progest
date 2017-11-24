#include <stdio.h>
#include "lista_alunos.h"

int main(){
    Aluno* lista = criar();
    lista = adiciona(lista);
    lista = adiciona(lista);
    mostra(lista);
    return 0;
}