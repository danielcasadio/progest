#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cifra(char *mensagem, int tamanho){
    int i;
    char first = mensagem[0];
    if (tamanho > 0){
        for(i = 0; i < tamanho -1; i++){
            mensagem[i] = mensagem[i] + mensagem[i+1];
        }
        mensagem[tamanho-1] = mensagem[tamanho-1] + first;
    }
    return mensagem;
}

char *decifra(char *mensagem, char first, int tamanho){
    int i;
    if (tamanho > 0){
        mensagem[tamanho - 1] = mensagem[tamanho - 1] - first;
        for( i = tamanho - 2; i >= 0; i-- ){
            mensagem[i] = mensagem[i] - mensagem[i+1];
        }
    }
    return mensagem;
}

int main(){
    char *mensagem;
    char first;
    int qtd = 0;
    mensagem = (char *) malloc(sizeof(char));
    printf("Digite a mensagem: ");
    scanf("%s", mensagem);
    while(mensagem[qtd]!= '\0'){
        qtd++;
    }
    first = mensagem[0];
    printf("Mensagem cifrada: %s\n", cifra(mensagem, qtd));
    printf("%c", first);
    printf("Mensagem decifrada: %s\n", decifra(mensagem, first, qtd));

    free(mensagem);
    return 0;
}