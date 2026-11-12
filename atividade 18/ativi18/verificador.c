
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificaNumero(int numero) {

    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("===== VERIFICADOR DE NÚMEROS =====\n");

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (verificaNumero(numero)) {

        printf("O número %d é par!\n", numero);

    } else {

        printf("O número %d é ímpar!\n", numero);
    }

    return 0;
}
