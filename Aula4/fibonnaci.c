#include <stdio.h>

int main()
{
    int fib=0, t1=1, t2=0, n;

    printf("Insira quantos fibonacci voce quer:\n");
    scanf("%d", &n);
    printf("\n");
    for (int contador = 1; contador <= n; ++contador)
    {

        fib = t1 + t2;
        t1 = t2;
        t2 = fib;
        printf("%d\n", fib);
    }
}

