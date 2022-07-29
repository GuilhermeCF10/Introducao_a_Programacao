#include <stdio.h>

int i;

int main(void)
{
    i = 0;
    soma1();
    sub1();

    return 0;
}

void soma1(void)
{
    i++;
    printf("Funcao soma1: %d\n", i);
}

void sub1(void)
{
    int i=10;
    i--;
    printf("Funcao sub1: %d\n", i);
}