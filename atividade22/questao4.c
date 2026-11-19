#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Resultado apos dobrar: %d\n", numero);

    return 0;
}