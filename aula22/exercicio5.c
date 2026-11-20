#include <stdio.h>

int main(void) {
    int numeros[5];
    int *p = numeros;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", p + i);
    }

    printf("\nELEMENTOS DO VETOR\n");
    for (i = 0; i < 5; i++) {
        printf("Posicao %d: %d\n", i, *(p + i));
    }

    return 0;
}