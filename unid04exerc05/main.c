#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int matA[5][5], matB[5][5];

    printf("DADOS DA MATRIZ A:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("\nDADOS DA MATRIZ B:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    printf("\nSOMA DAS MATRIZES A E B:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d + %d = %d\n", matA[i][j], matB[i][j], matA[i][j] + matB[i][j]);
        }
    }

    printf("\nDIFERENÇA ENTRE MATRIZES A E B:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d - %d = %d\n", matA[i][j], matB[i][j], matA[i][j] - matB[i][j]);
        }
    }

    return 0;
}
