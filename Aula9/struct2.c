#define LINHAS 2
#define COLUNAS 3

#include <stdio.h>

typedef struct
{
    float peso;
    float altura;
    int idade;

} Pessoa;

Pessoa SetPessoa(int idade, float peso, float altura)
{
    Pessoa P;
    P.idade = idade;
    P.peso = peso;
    P.altura = altura;
    return P;
}

void imprimePessoa(Pessoa P)
{
    printf("Idade: %d, Peso: %.2f, Altura: %.2f\n", P.idade, P.peso, P.altura);
}

int main()
{
    Pessoa Joao;
    Joao = SetPessoa(15, 60.5, 1.75);
    imprimePessoa(Joao);
}
