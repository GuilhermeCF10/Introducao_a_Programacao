#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define TEMPOS_DIARIOS 14
#define TAM_NOME_PROFESSOR 100
#define TAM_NOME_DISCIPLINA 100
#define TAM_NOME_DIASEMANA 50

// Criar a struct para armazenar cada disciplina
typedef struct
{
    int codigo;
    char nome[TAM_NOME_DISCIPLINA];
    int creditos;
    int periodo;
    char professor[TAM_NOME_PROFESSOR];

} Disciplina;

// Criar cada Disciplina
Disciplina criarDisciplina(int codigo, char nome[TAM_NOME_DISCIPLINA], int creditos, int periodo, char professor[TAM_NOME_PROFESSOR])
{
    Disciplina disciplina;

    for (int i = 0; i < TAM_NOME_DISCIPLINA; i++)
    {
        disciplina.nome[i] = nome[i];
    }
    disciplina.codigo = codigo;
    disciplina.creditos = creditos;
    disciplina.periodo = periodo;

    for (int i = 0; i < TAM_NOME_PROFESSOR; i++)
    {
        disciplina.professor[i] = professor[i];
    }

    return disciplina;
};

// Criar a estrutura para o dia da semana
typedef struct
{
    char nome[50];
    int horarios[TEMPOS_DIARIOS];

} Dia;

// Criar o dia da semana
Dia criarDiaDaSemana(char nome[TAM_NOME_DIASEMANA])
{
    Dia DiaDaSemana;

    for (int i = 0; i < TAM_NOME_DIASEMANA; i++)
    {
        DiaDaSemana.nome[i] = nome[i];
    }

    for (int j = 0; j < TEMPOS_DIARIOS; j++)
    {
        DiaDaSemana.horarios[j] = NULL;
    }

    return DiaDaSemana;
};

int main()
{
    Dia diasDaSemana[] = {
        criarDiaDaSemana("Segunda"),
        criarDiaDaSemana("Terca"),
        criarDiaDaSemana("Quarta"),
        criarDiaDaSemana("Quinta"),
        criarDiaDaSemana("Sexta")};

    Disciplina disciplinas[] = {
        criarDisciplina(1, "Calculo Diferencial e Integral I", 6, 1, "Aline"),
        criarDisciplina(2, "Quimica dos materiais", 5, 1, "Maike"),
        criarDisciplina(3, "Introducao a Programacao", 5, 1, "Pedro"),
        criarDisciplina(4, "Geometria Analitica", 3, 1, "Anderson"),
        criarDisciplina(5, "Desenho Tecnico I", 3, 1, "Silvia"),
        criarDisciplina(6, "Introducao a Engenharia", 2, 1, "Lis")};

    // Mostrar os dias da Semana
    // for (int k = 0; k < 5; k++)
    // {
    //     printf("Nome do Dia Da Semana: %s\n", diasDaSemana[k].nome);
    //     printf("Horários: ");

    //     for (int i = 0; i < TEMPOS_DIARIOS; i++)
    //     {
    //         printf("%d ", diasDaSemana[k].horarios[i]);
    //     }
    //     printf("\n\n");
    // }

    // Mostrando matérias
    // for (int j = 0; j < 6; j++)
    // {
    //     printf("Matéria: %s\n", disciplinas[j].nome);
    //     printf("Credito: %d\n", disciplinas[j].creditos);
    //     printf("Periodo: %d\n", disciplinas[j].periodo);
    //     printf("Professora: %s\n", disciplinas[j].professor);
    //     printf("\n");
    // }

    // Logica do Codigo

    // Cada disciplina
    int qntdDiasSemana = 5;
    int qntdDisciplinas = 6;

    int indiceDia = 0, indiceHorario, indiceCreditos = 0, indiceDisciplina = 0;

    while (indiceDia < qntdDiasSemana)
    {
        while (indiceHorario < TEMPOS_DIARIOS)
        {
            while (indiceDisciplina < qntdDisciplinas)
            {
                while (indiceCreditos < disciplinas[indiceDisciplina].creditos)
                {
                    while (indiceDia < qntdDiasSemana)
                    {
                        printf("%d %d %d %d\n", indiceDisciplina, indiceCreditos, indiceDia, indiceHorario);
                        if (indiceDisciplina > 6)
                        {
                            indiceDisciplina = 0;
                            break;
                        }
                        // Só quero aula até o sexto tempo
                        if (indiceHorario >= 5)
                        {
                            diasDaSemana[indiceDia].horarios[indiceHorario] = disciplinas[indiceDisciplina].codigo;
                            indiceDia++;
                            indiceHorario = 0;
                            break;
                        }
                        // So quero no máximo 3 tempos de cada aula
                        else if (indiceCreditos + 1 == 4)
                        {
                            diasDaSemana[indiceDia].horarios[indiceHorario] = disciplinas[indiceDisciplina].codigo;
                            indiceDisciplina++;
                            indiceCreditos = 0;
                            indiceHorario++;
                            break;
                        }

                        // Se a disciplina chegou na quantidade de creditos
                        else if (indiceCreditos + 1 == disciplinas[indiceDisciplina].creditos)
                        {
                            indiceHorario++;
                            indiceDisciplina++;
                            indiceCreditos = 0;
                            break;
                        }

                        diasDaSemana[indiceDia].horarios[indiceHorario] = disciplinas[indiceDisciplina].codigo;
                        indiceHorario++;
                        indiceCreditos++;
                    }
                }
            }
        }
        indiceDia++;
    }

    // Mostrar os dias da Semana
    for (int k = 0; k < 5; k++)
    {
        printf("\nDia: %s\t", diasDaSemana[k].nome);
        printf("Horários: ");

        for (int i = 0; i < TEMPOS_DIARIOS; i++)
        {
            printf("%d ", diasDaSemana[k].horarios[i]);
        }
        printf("\n");
    }

    // printf("\n\n");
    // return 0;
}

// FILE *disciplinas_arq = fopen("disciplinas.txt", "r");
// char nome[5][50];
// int b = 0, c = 0;

// for (int i = 0; i < 5; i++)
// {
//     fscanf(disciplinas_arq, " %[^,] %[^,] %[^\n]", nome[i], &b, &c);
//     printf("%s\n", nome[i]);
//     printf("%d", i);
// }
