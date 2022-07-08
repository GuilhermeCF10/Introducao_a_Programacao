#include <stdio.h>

int main()
{

    int aluno = 1, qntd_alunos = 10, cmd, aprovados = 0, reprovados = 0;

    while (aluno <= qntd_alunos)
    {
        printf("============\tSistema da Escola\t============\n");
        printf("Insira 1 caso voce foi aprovado ou 0 caso voce foi reprovado\n");
        scanf("%d", &cmd);

        if (cmd == 0)
        {
            printf("Voce foi reprovado\n\n");
            ++aluno;
            ++reprovados;
        }
        else if (cmd == 1)
        {
            printf("Voce foi aprovado\n\n");
            ++aluno;
            ++aprovados;
        }
        else
        {
            printf("Voce digitou um comando incorreto\n\n");
        }
    }

    printf("============\tSistema da Escola\t============\n");
    printf("Foi detectado %d aprovados e %d reprovados\n", aprovados, reprovados);
    if (aprovados >= 6)
    {
        printf("Nesse caso o professor de matematica recebera bonus\n\n");
    }
    else
    {
        printf("Nesse caso o professor de matematica nao recebera bonus");
    }

    printf("O sistema foi finalizado");
}