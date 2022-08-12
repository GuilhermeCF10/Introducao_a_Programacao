#include <stdio.h>
#define DIM 4

int main() {
    int vetor[DIM] = {1, 3, 4, 5}, soma=0;

    for(int i=0; i<DIM ; i++){
        soma += vetor[i];
    }
    printf("A soma eh: %d", soma);
}
