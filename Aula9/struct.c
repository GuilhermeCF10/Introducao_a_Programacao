#define LINHAS 2
#define COLUNAS 3

#include <stdio.h>

typedef struct
{
    float peso;
    float altura;
    int idade;

} Pessoa;

void imprimePessoa(Pessoa P)
{
    printf("Idade: %d, Peso: %.2f, Altura: %.2f\n", P.idade, P.peso, P.altura);
}

int main()
{
    Pessoa Joao, P2;
    Pessoa Povo[10];

    Joao.idade = 15;
    Joao.peso = 60.5;
    Joao.altura = 1.75;

    Povo[4].idade = 23;
    Povo[4].peso = 75.3;
    Povo[4].altura = 1.89;

    P2 = Povo[4];

    P2.idade++;

    imprimePessoa(Joao);
    imprimePessoa(Povo[4]);
    imprimePessoa(P2);
}
