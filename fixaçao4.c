#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {12, 45, 7},
        {33, 9, 81},
        {27, 64, 18}
    };
    int maior = matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor da matriz: %d\n", maior);

    return 0;
}