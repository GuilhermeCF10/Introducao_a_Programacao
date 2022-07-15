#include <stdio.h>

int main()
{
    int contador = 1;

    do {
        printf("Contador: %d\n", contador);
        ++contador;
    } while (contador <= 10);
}