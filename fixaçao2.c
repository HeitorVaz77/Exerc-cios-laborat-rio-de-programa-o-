#include <stdio.h>

int main(void) {
    float notas[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite a nota da prova %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < 3; i++) {
        float soma = 0;

        for (int j = 0; j < 2; j++) {
            soma += notas[i][j];
        }

        printf("Media do aluno %d: %.1f\n", i + 1, soma / 2);
    }

    return 0;
}