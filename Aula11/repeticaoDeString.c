#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAMANHO_PALAVRA 30

int main()
{

    char palavra[TAMANHO_PALAVRA];
    int i;

    FILE *pont_arq;

    pont_arq = fopen("arquivo_palavra.txt", "r");

    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo\n");
        return 1;
    }

    fscanf(pont_arq, "%[^\n]", palavra);


    printf("A frase dentro do txt é: %s\n\n\n", palavra);


    for (i=0; i<TAMANHO_PALAVRA-2; i++) {
        if (palavra[i] == 'c' && palavra[i+1] == 'a' && palavra[i+2] == 'o') {
            printf("\n'CAO' Repitido no indice: %d\n", i);
        }
    }


    

    return 0;
}

// Escrita de um arquivo
// char palavra[] = "cao";

// FILE *pont_arq;

// pont_arq = fopen("arquivo_palavra.txt", "w");

// if (pont_arq == NULL)
// {
//     printf("Erro na abertura do arquivo\n");
//     return 1;
// }

// printf("Escreva uma palavra para testar a gravação de arquivo\n");
// scanf("%s", palavra);
// fprintf(pont_arq, "%s", palavra);
// fclose(pont_arq);
