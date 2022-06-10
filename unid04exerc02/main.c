#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int n, troca;

    printf("Quantos elementos terá o vetor? ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o %d elemento: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vet[i] < vet[j]) {
                troca = vet[i];
                vet[i] = vet[j];
                vet[j] = troca;
            }
        }
    }

        for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}
