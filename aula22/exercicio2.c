#include <stdio.h>

int main(void) {
    int numero = 20;
    int *p = &numero;

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", (void *)&numero);
    printf("Endereco armazenado no ponteiro: %p\n", (void *)p);
    printf("Valor acessado pelo ponteiro: %d", *p);

    return 0;
}