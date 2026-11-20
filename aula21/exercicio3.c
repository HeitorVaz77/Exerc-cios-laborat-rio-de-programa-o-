#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario f;
    int qtd, i, cont = 0;

    printf("Quantos funcionarios deseja cadastrar (1 a 5)? ");
    if (scanf("%d", &qtd) != 1 || qtd < 1 || qtd > 5) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);
        printf("Salario: ");
        scanf("%f", &f.salario);
        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);

        fprintf(arquivo, "%s\n%.2f %d\n", f.nome, f.salario, f.horasExtras);
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
        return 1;
    }
    printf("\nDados gravados com sucesso!\n");

    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum funcionario cadastrado.\n");
        return 1;
    }

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");
    while (fscanf(arquivo, " %49[^\n] %f %d",
                  f.nome, &f.salario, &f.horasExtras) == 3) {
        cont++;
        printf("\nFuncionario %d\n", cont);
        printf("Nome: %s\n", f.nome);
        printf("Salario: R$ %.2f\n", f.salario);
        printf("Horas extras: %d\n", f.horasExtras);
    }

    fclose(arquivo);
    
    return 0;
}