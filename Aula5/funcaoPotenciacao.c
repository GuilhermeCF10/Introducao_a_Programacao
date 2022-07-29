#include <stdio.h>

float eleva(float a, float b)
{
    float resposta = 1.0;

    for ( ; b > 0 ; b--)
    {
        resposta *= a;
    }

    return resposta;
}

int main(void)
{
    float numero, potencia;

    printf("Entre com um numero\n");
    scanf("%f", &numero);

    printf("Entre com a potencia\n");
    scanf("%f", &potencia);

    printf("%.1f elevado a %.1f e igual a %.1f\n", numero, potencia, eleva(numero, potencia));

    return 0;
}
