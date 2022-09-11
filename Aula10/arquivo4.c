#include <stdlib.h>
#include <stdio.h>

int main() {
    char ch[15] = "Teste Geral";
    int valor[15], i=0;
    FILE *pont_arq;

    pont_arq = fopen("binario.bin", "rb");

    fread(ch, sizeof(ch), 1, pont_arq);
    fread(valor, sizeof(valor), 1, pont_arq);
    printf("Vetor de caracteres: \n");
    for (i=0; i<15; i++) {
        printf("%c", ch[i]);
    }
    printf("Vetor de inteiros:\n");

     for (i=0; i<15; i++) {
        printf("\n%d", valor[i]);
    }
    fclose(pont_arq);
    printf("\n\n\n\n\n");
}