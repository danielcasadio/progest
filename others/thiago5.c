#include <stdio.h>

int reserva(int dia, int mes, int matriz[][12]){
    if (mes > 0 && mes < 13){
        if(dia > 0 && dia < 32){
            if (matriz[dia-1][mes-1] == 0){
                matriz[dia-1][mes-1] = 1;
                printf("Reserva feita com sucesso para o dia %i/%i\n", dia , mes);
            } else {
                printf("Dia ja reservado");
            }
        } else {
            printf("Data invalida\n");
        }
    } else {
        printf("Data invalida\n");
    }
    return 0;
}

int cancela(int dia, int mes, int matriz[][12]){
    if (mes > 0 && mes < 13){
        if(dia > 0 && dia < 32){
            if (matriz[dia-1][mes-1] == 1){
                matriz[dia-1][mes-1] = 0;
                printf("Reserva cancelada com sucesso para o dia %i/%i.\n", dia , mes);
            } else {
                printf("Dia nao reservado.\n");
            }
        } else {
            printf("Data invalida\n");
        }
    } else {
        printf("Data invalida\n");
    }
    return 0;
}

int main(){
    int i, j, operacao, d, m;
    int matriz[31][12];
    for(i = 0; i < 31; i++){
        for (j = 0; j < 12; j++){
            matriz[i][j] = 0;
        }
    }
    fflush(stdin);
    printf("Escolha operacao:\n1 - reserva\n2 - cancelar\n3 - finalizar programa\n");
    scanf(" %d", &operacao);

    d = m = 0;
    do{
        if (operacao == 1){
            fflush(stdin);
            printf("Digite o dia: ");
            scanf(" %d", &d);

            fflush(stdin);
            printf("Digite o mes: ");
            scanf(" %d", &m);

            reserva(d, m, matriz);
        } else if (operacao == 2){
            fflush(stdin);
            printf("Digite o dia: ");
            scanf(" %d", &d);
            fflush(stdin);
            printf("Digite o mes: ");
            scanf(" %d", &m);

            cancela(d, m, matriz);
        } else {
            printf("Operacao invalida\n");
        }
        fflush(stdin);
        printf("Escolha operacao:\n1 - reserva\n2 - cancelar\n3 - finalizar programa\n");
        scanf(" %d", &operacao);
    } while (operacao != 3);

    printf("\n");

    for(i = 0; i < 31; i++){
        for (j = 0; j < 12; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nPrograma finalizado.");
    return 0;
}
