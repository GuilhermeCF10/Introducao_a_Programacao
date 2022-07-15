#include <stdio.h>

int main()
{

    int x, valorAnd, valorOr, y, z;

    printf("Insira os valores de x, y, , n e z\n");
    printf("Insira o valor x\n");
    scanf("%d", &x);
    printf("Insira o valor y\n");
    scanf("%d", &y);
    printf("Insira o valor z\n");
    scanf("%d", &z);

    valorAnd = 1 * (x > y && x > z) + 2 * (y > x && y > z) + 3 * (z > x && z > y);
    printf("\n Valor com AND == %d\n\a", valorAnd);

    valorOr = 1 * (x > y || x > z) + 2 * (y > x || y > z) + 3 * (z > x || z > y);
    printf("\n Valor com OR == %d\n\a", valorOr);
}