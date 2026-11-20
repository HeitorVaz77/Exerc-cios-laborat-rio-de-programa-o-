#include <stdio.h>

int main(void) {
    FILE *arquivo;
    int numero, i;

    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numero);
        fprintf(arquivo, "%d\n", numero);
    }

    fclose(arquivo);
    printf("\nNumeros gravados em numeros.txt\n");

    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    printf("\n===== NUMEROS ARMAZENADOS =====\n");
    while (fscanf(arquivo, "%d", &numero) == 1) {
        printf("%d\n", numero);
    }

    fclose(arquivo);
    return 0;
}