
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibirLinha(void) {
    printf("***********\n");
}

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    exibirLinha();

    printf("  RELATÓRIO DE ESTOQUE\n");

    exibirLinha();

    return 0;
}
