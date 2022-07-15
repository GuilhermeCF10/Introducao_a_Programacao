#include <stdio.h>

int main()
{

    int x;

    printf("\nAperta CTRL + C para finalizar o programa\n");

    while (x)
    {

        printf("Insira um valor para x:\n");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("Eu gosto de chocolate\n\n");
            break;
        case 2:
            printf("Eu gosto de quiabo\n\n");
            break;
        case 3:
            printf("Eu gosto de beber\n\n");
            break;
        }
    }
}