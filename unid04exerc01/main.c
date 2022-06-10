#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int n, contador;

    printf("Número de posições dos vetores A e B: ");
    scanf("%d", &n);

    int vetA[n], vetB[n];

    printf("DADOS DO VETOR A\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetA[i]);
    }

    printf("\nDADOS DO VETOR B\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetB[i]);
    }

    contador = 0;
    for (int i = 0; i < n; i++) {
        if (vetA[i] != vetB[i]) {
            contador++;
        }
    }

    printf("\nOs vetores A e B possuem elemento diferentes em %d posições\n", contador);

    return 0;
}
