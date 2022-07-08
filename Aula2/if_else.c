

#include <stdio.h>

int main()
{
    int jogos = 10, gols = 11, rodadas = 5, jogosporrodada, golsporrodada, um = 1;

    printf("Digite o numero de jogos\n");
    scanf("%d", &jogos);

    printf("Digite o numero de gols\n");
    scanf("%d", &gols);

    if (jogos == 10)
    {
        printf("Acertou\n");
    }
    else
    {
        printf("Errou\n");
    }

    if (gols == 11)
    {
        printf("Acertou\n");
    }
    else
    {
        printf("Errou\n");
    }

    jogosporrodada = jogos / rodadas;
    printf("Jogos por Rodada: %d\n", jogosporrodada);

    golsporrodada = (gols - 1) / rodadas;
    printf("Gols por Rodada: %d", golsporrodada);

    return 0;
}