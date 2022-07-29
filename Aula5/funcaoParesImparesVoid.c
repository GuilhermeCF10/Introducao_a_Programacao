#include <stdio.h>

int main(void) {
    printf("\nNumeros pares\n");
    pares();
    printf("\nNumeros impares\n");
    impares();

    return 0;
}

void pares (void){
    for(int i=2; i <= 10; i+=2) {
        printf("Os numeros pares sao: %d\n", i);
    }
}

void impares (void){
    for(int i=1; i <= 11; i+=2) {
        printf("Os numeros impares sao: %d\n", i);
    }
}