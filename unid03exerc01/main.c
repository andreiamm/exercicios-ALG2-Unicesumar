#include <stdio.h>

int main()
{
    int n, maior, menor, pares, impares, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    maior = n;
    menor = n;
    pares = 0;
    impares = 0;
    soma = 0;
    while (n != 0) {
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
        if (n % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        soma += n;

        printf("Digite outro numero inteiro: ");
        scanf("%d", &n);
    }

    printf("Media dos valores digitados = %.2f\n", (float)soma / (pares + impares));
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);
    printf("Quantidade de numeros pares digitados: %d\n", pares);
    printf("Quantidade de numeros impares digitados: %d\n", impares);


    return 0;
}
