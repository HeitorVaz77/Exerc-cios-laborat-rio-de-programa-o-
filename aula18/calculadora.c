#include <stdio.h>

void exibirMenu() {
    printf("\n===== CALCULADORA =====\n\n");
    printf("1 - Somar\n");
    printf("2 - Substrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

float somar(float a, float b) {
    return a + b;
}

float substrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    int opcao;
    float n1, n2;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("\nPrimeiro numero: ");
            scanf("%f", &n1);
            printf("\nSegundo numero: ");
            scanf("%f", &n2);
        }

        switch (opcao) {
            case 1:
                printf("\nResultado: %.2f\n", somar(n1, n2));
                break;
            case 2:
                printf("\nResultado: %.2f\n", substrair(n1, n2));
                break;
            case 3:
                printf("\nResultado: %.2f\n", multiplicar(n1, n2));
                break;
            case 4:
                if (n2 == 0)
                    printf("\nErro: nao e possivel dividir por zero");
                else
                    printf("Resultado: %.2f\n", dividir(n1, n2));
                break;
            case 0:
                printf("\nSaindo...\n");
            default:
                printf("\nOpcao invalida\n");
        }
    } while (opcao != 0);

    return 0;
}