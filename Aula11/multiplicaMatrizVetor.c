#include <stdio.h>
#include <stdlib.h>
#define DIML 3
#define DIMC 3

int multiplicaMatriz()
{
    int matriz[DIML][DIMC];
    int vetor[DIML];
    int resultante[DIML];
    int i, j;

    250

    // Inserindo os valores da matriz
    for (i = 0; i < DIML; i++)
    {
        for (j = 0; j < DIMC; j++)
        {
            printf("\nInsira o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    // matriz = (int*)malloc(sizeof(int));

    // Inserindo os valores do vetor
    for (i = 0; i < DIML; i++)
    {
        printf("\nInsira o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    // vetor = (int*)malloc(sizeof(int));

    // Calculando a matriz * vetor
    for (i = 0; i < DIML; i++)
    {
        int aux = 0;
        for (j = 0; j < DIMC; j++)
        {
            aux = aux + matriz[i][j];
        }
        resultante[i] = aux * vetor[i];
    }
    // resultante = (int*)malloc(sizeof(int));

    printf("\nO resultado da matriz é: \n");

    for (i = 0; i < DIML; i++)
    {
        printf("\t%d", resultante[i]);
    }

    printf("\n\n");
    printf("Quantidade Matriz: %d bytes\nQuantidade Vetor: %d bytes\nQuantidade Resultante: %d bytes\n", sizeof(matriz), sizeof(vetor), sizeof(resultante));
    printf("\n\n\n");
}

int main()
{
    multiplicaMatriz();
}