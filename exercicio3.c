#include <stdio.h>

int parImp(int n)
{
    if (n % 2 == 0) return 1;
    else return 0;
}

int main()
{
    int n;

    printf("VERIFICADOR DE NUMEROS\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (parImp(n) == 1)
        printf("\nO numero %d eh PAR\n");
    else
        printf("\nO numero %d eh IMPAR\n");

    return 0;
}