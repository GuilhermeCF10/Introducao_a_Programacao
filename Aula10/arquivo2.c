#include <stdio.h>

int main()
{
    FILE *pont_arq;
    char palavra[20];

    pont_arq = fopen("arquivo_palavra.txt", "r");

    while (fgets(palavra, 20, pont_arq) != NULL)
    {
        printf("%s", palavra);
    }

    printf("\n\n\n\n\n\n");
}