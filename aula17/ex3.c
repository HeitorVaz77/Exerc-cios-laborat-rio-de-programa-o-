#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], nomeCopia[50], codigo[10], mensagem[100];

    printf("Digite o primeiro nome do funcionario: ");
    scanf("%49s", nome);

    printf("Digite o codigo do setor (RH ou TI): ");
    scanf("%9s", codigo);

    int quantidade = strlen(nome);

    strcpy(nomeCopia, nome);

    strcpy(mensagem, "Bem-vindo, ");
    strcat(mensagem, nomeCopia);
    strcat(mensagem, "!");

    printf("\nDados do Funcionario\n");
    printf("Nome: %s\n", nomeCopia);

    if (strcmp(codigo, "RH") == 0) {
        printf("Setor: Recursos Humanos\n");
    } else if (strcmp(codigo, "TI") == 0) {
        printf("Setor: Tecnologia da Informacao\n");
    } else {
        printf("Setor invalido\n");
    }

    printf("Quantidade de caracteres do nome: %d\n", quantidade);
    printf("Mensagem: %s\n", mensagem);

    return 0;
}
