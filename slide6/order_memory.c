#include <stdio.h>
#include <stdlib.h>
int mostra(int *vetor, int tamanho)
{
    int i;
    if (tamanho == 0)
    {
        printf("Não é possível mostrar um vetor vazio.");
        return -1;
    }
    printf("\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%i ", vetor[i]);
    }
    printf("\n");
    return 0;
}

int troca(int *vetor, int a, int b)
{
    int aux = vetor[a];
    vetor[a] = vetor[b];
    vetor[b] = aux;
    return 0;
}

int insertion(int *vetor, int tamanho)
{
    int i, j, selecionado;
    if (tamanho <= 1)
    {
        printf("Não é possivel ordenar um vetor vazio/unitário.");
        return -1;
    }
    else
    {
        for (i = 1; i < tamanho; i++)
        {
            selecionado = vetor[i];
            j = i - 1;
            while ((j >= 0) && (selecionado < vetor[j]))
            {
                vetor[j + 1] = vetor[j];
                j--;
            }
            if (j != (i - 1))
            {
                vetor[j + 1] = selecionado;
            }
        }
    }
    return 0;
}

int selection(int *vetor, int tamanho)
{
    int i, j, k, menor;
    for (i = 0; i < tamanho; i++)
    {
        menor = vetor[i];
        k = i;
        for (j = i; j < tamanho; j++)
        {
            if (vetor[j] < menor)
            {
                menor = vetor[j];
                k = j;
            }
        }
        if (vetor[k] < vetor[i])
            troca(vetor, i, k);
        mostra(vetor, tamanho);
    }
    return 0;
}

int bubble(int *vetor, int tamanho)
{
    int i, j;
    for (i = tamanho - 1; i > 0; i--)
    {
        for (j = 0; j < tamanho - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                troca(vetor, j, j + 1);
            }
        }
        mostra(vetor, tamanho);
    }
    printf("------------------------------------\n");
    return 0;
}

int main()
{
    int tamanho, i;
    int *vetor;
    scanf("%d", &tamanho);
    vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL)
    {
        printf("Sem espaço");
        return -1;
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    mostra(vetor, tamanho);
    bubble(vetor, tamanho);
    mostra(vetor, tamanho);
    free(vetor);
    return 0;
}
