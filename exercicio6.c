#include <stdio.h>

int calcularFatorial(int n)
{
    int fatorial = 1;
    int i;

    for (i = 0; i <= n; i++)
        fatorial = fatorial * i;

    return fatorial;
}

int main()
{
    int numero;

    printf("CALCULO DE FATORIAL\n\n");

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12)
        printf("\nNumero invalido, digite um valor entre 0 e 12\n");
    else
        printf("\n%d! = %d", numero, calcularFatorial(numero));

    return 0;
}