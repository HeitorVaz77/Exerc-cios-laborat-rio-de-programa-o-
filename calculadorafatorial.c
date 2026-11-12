
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int exibirMenu(void) {
    int opcao;

    printf("\n--- CALCULADORA ---\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    return opcao;
}

int somar(int n1, int n2) {
    return n1 + n2;
}

int subtrair(int n1, int n2) {
    return n1 - n2;
}

int multiplicar(int n1, int n2) {
    return n1 * n2;
}

int dividir(int n1, int n2) {
    if (n2 == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }

    return n1 / n2;
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    int opcao, n1, n2, resultado;

    do {

        opcao = exibirMenu();

        if (opcao >= 1 && opcao <= 4) {

            printf("Digite o primeiro número: ");
            scanf("%d", &n1);

            printf("Digite o segundo número: ");
            scanf("%d", &n2);
        }

        switch (opcao) {

            case 0:
                printf("Programa encerrado!\n");
                break;

            case 1:
                resultado = somar(n1, n2);
                printf("Resultado: %d\n", resultado);
                break;

            case 2:
                resultado = subtrair(n1, n2);
                printf("Resultado: %d\n", resultado);
                break;

            case 3:
                resultado = multiplicar(n1, n2);
                printf("Resultado: %d\n", resultado);
                break;

            case 4:
                resultado = dividir(n1, n2);

                if (n2 != 0) {
                    printf("Resultado: %d\n", resultado);
                }
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
