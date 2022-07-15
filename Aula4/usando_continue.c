#include <stdio.h>

int main()
{

    int x;

    for (x = 1; x <= 10; x++)
    {
        if (x == 5)
        {
            continue;
        }
    }

    printf("\n Nota da prova X == %d\n\a", x);
}