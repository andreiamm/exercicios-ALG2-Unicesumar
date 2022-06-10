#include <stdio.h>

int main()
{
    int n = 5;
    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("Informe o %do valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\nVETOR DIGITADO DE TRAS PARA FRENTE:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vet[i]);
    }

    return 0;
}
