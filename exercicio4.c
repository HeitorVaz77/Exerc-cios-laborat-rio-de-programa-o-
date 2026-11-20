#include <stdio.h>

int dobro(int quantidade)
{
    return quantidade * 2;
}

int main()
{
    int quantidade;

    printf("CONTROLE DE ESTOQUE\n\n");

    printf("Quantidade inicial: ");
    scanf("%d", &quantidade);

    printf("\nQuantidade apos duplicacao: %d\n", dobro(quantidade));

    return 0;
}