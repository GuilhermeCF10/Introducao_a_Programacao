#include <stdio.h>

int main()
{
    int contador = 1, soma = 0;

    while (contador <= 10)
    {
        soma = soma + contador;
        ++contador;
        printf("O valor da soma eh %d\n", soma);
    }
}