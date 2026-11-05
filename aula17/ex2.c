#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], curso[20], nomeCopia[100], descricao[150];

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o curso (INFORMATICA ou ADMINISTRACAO): ");
    scanf("%19s", curso);

    int quantidade = strlen(nome);

    strcpy(nomeCopia, nome);

    strcpy(descricao, "Aluno cadastrado: ");
    strcat(descricao, nomeCopia);

    printf("\nResumo do Cadastro\n");
    printf("Nome: %s\n", nomeCopia);
    printf("Curso: ");

    if (strcmp(curso, "INFORMATICA") == 0) {
        printf("Informatica\n");
    } else if (strcmp(curso, "ADMINISTRACAO") == 0) {
        printf("Administracao\n");
    } else {
        printf("Curso invalido\n");
    }

    printf("Quantidade de caracteres: %d\n", quantidade);
    printf("Descricao: %s\n", descricao);

    return 0;
}