#include <stdio.h>

int main()
{

    printf("\nAperta CTRL + C para finalizar o programa\n");

    while (1)
    {
        int x, fatorial = 1;
        printf("\nFatorial\n");
        printf("Insira qual fatorial voce deseja:\n");
        scanf("%d", &x);

        for (int contador = 1; contador <= x; contador++)
        {
            fatorial = fatorial * contador;
        }

        printf("\n%d! eh igual a %d\n\n", x, fatorial);
    }
}