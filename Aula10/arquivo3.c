#include <stdlib.h>
#include <stdio.h>

int main()
{
    char ch[15] = "Teste Geral";
    int valor[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    FILE *pont_arq;

    pont_arq = fopen("binario.bin", "w");

    if (pont_arq != NULL)
    {
        printf("Arquivo criado com sucesso!\n");
    }

    else
    {
        printf("Arquivo com erro\n");
        exit(1);
    }

    fwrite(valor, sizeof(valor), 15, pont_arq);
    fclose(pont_arq);
    printf("Dados gravados com sucesso!\n");
}