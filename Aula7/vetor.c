#include <stdio.h>
#define DIM 8

int main() {
    int vetor[DIM] = {5, 3, 1, 4, 8, 9, 2, 6};

    for(int i=0; i<DIM ; i++){
        if (vetor[i] == 8) {
            printf("A posicao do numero 8 no vetor eh %d", i);
        }
    }
}
