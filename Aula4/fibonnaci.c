#include <stdio.h>

int main()
{
    int i, n;

    int t1 = 0, t2 = 1;

    int proximo = t1 + t2;

    printf("Insira quantos fibonacci voce quer:\n");
    scanf("%d", &n);

    // print the first two terms t1 and t2
    printf("Fibonacci: %d, %d, ", t1, t2);

    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", proximo);
        t1 = t2;
        t2 = proximo;
        proximo = t1 + t2;
    }
}

/*
1
1+1 =2
1+2+1 = 4
1+3+3+1 = 8










*/