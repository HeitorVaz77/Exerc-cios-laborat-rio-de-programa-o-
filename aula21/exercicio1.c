#include <stdio.h>

int main(void) {
    FILE *arquivo;
    char nome[50];
    int matricula;
    int qtd, i;

    printf("Quantos funcionarios deseja cadastrar? (maximo 5) ");
    if (scanf("%d", &qtd) != 1 || qtd < 1 || qtd > 5) {
        printf("Quantidade invalida\n");
        return 1;
    }

    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", nome);
        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "Nome: %s | Matricula: %d\n", nome, matricula);
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
        return 1;
    }

    printf("\nDados gravados com sucesso em funcionarios.txt\n");

    return 0;
}