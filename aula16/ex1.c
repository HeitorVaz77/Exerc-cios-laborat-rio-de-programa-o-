#include <stdio.h>

int main(void)
{
    char palavra[50];
    int quantidade = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++)
        quantidade++;
    
    printf("Quantidade de letras: %d\n", quantidade);

    return 0;
}