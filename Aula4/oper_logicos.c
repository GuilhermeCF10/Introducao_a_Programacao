#include <stdio.h>

int main()
{

    int x, valor, y, z, n;


    printf("Insira os valores de x, y, , n e z\n");
    printf("Insira o valor x\n");
    scanf("%d", &x);
    printf("Insira o valor y\n");
    scanf("%d", &y);
    printf("Insira o valor n\n");
    scanf("%d", &n);
    printf("Insira o valor z\n");
    scanf("%d", &z);


    for (x = 1; x <= 10; x++)
    {
        if (x == 5)
        {
            break;
        }
    }

    printf("\n Nota da prova X == %d\n\a", x);

    valor = 1 * (x > y && n > z) + 2 * (y > x && y > z) + 3 * (z > x && z > y);


    printf("\n Valor == %d\n\a", valor);
}