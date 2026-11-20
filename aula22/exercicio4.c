#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(void) {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    printf("Valor original: %d\n", valor);

    dobrar(&valor);

    printf("Valor dobrado: %d\n", valor);

    return 0;
}