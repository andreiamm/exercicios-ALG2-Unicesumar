#include <stdio.h>

int main()
{
    int n, qtdePares = 0, qtdeImpares = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n % 2 == 0) {
            qtdePares++;
        } else {
            qtdeImpares++;
        }

        printf("Digite outro numero inteiro: ");
        scanf("%d", &n);
    }

    printf("\nForam digitados %d numeros pares e %d impares\n", qtdePares, qtdeImpares);

    return 0;
}
