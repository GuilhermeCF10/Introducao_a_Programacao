#include <stdio.h>
#include <string.h>

int main() {
    char msgA[128] = "Alo mundo! Como vai?";

    for (int i=0; msgA[i]) != "\0"; i++) {
        printf("%c", msgA[i]);
    }
}