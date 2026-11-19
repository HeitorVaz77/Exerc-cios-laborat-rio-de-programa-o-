#include <stdio.h>

int main() {
    int vetor[5];
    int *ponteiro = vetor;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos do vetor:\n");

    for (i = 0; i < 5; i++) {
        printf("%d\n", *(ponteiro + i));
    }

    return 0;
}