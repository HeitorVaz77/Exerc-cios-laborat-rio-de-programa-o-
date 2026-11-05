#include <stdio.h>
#include <string.h>

int main()
{
    char produto[50];
    char categoria[20];
    char confirmacao[50];
    char descricaoCategoria[30];
    char mensagem[100] = "Produto cadastrado: ";
    int tamanho;

    printf("=== CADASTRO DE PRODUTOS ===\n");

    printf("Digite o nome do produto: ");
    scanf("%49s", produto);

    printf("Digite a categoria (ALIMENTO ou ELETRONICO): ");
    scanf("%19s", categoria);

    tamanho = strlen(produto);

    if (strcmp(categoria, "ALIMENTO") == 0) {
        strcpy(descricaoCategoria, "Produto Alimenticio");

    } else if (strcmp(categoria, "ELETRONICO") == 0) {
        strcpy(descricaoCategoria, "Produto Eletronico");

    } else {
        printf("\nCategoria invalida!\n");
        return 1;
    }

    strcpy(confirmacao, produto);

    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n=== DADOS DO PRODUTO ===\n");

    printf("Produto: %s\n", confirmacao);
    printf("Quantidade de caracteres: %d\n", tamanho);
    printf("Categoria: %s\n", descricaoCategoria);

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso!\n");

    return 0;
}