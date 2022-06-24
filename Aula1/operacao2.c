#include <stdio.h>

int main()
{
    int a, b, c, d, operacao;
    a = 2;
    b = 5;
    c = 3;
    d = 7;
    operacao = (a * b * b) + (c * b) + d;
    printf("O valor da operacao eh:\n%d", operacao);

    return 0;
}