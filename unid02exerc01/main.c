#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, maior, menor;

    printf("Digite o 1o numero: ");
    scanf("%d", &n1);
    printf("Digite o 2o numero: ");
    scanf("%d", &n2);
    printf("Digite o 3o numero: ");
    scanf("%d", &n3);
    printf("Digite o 4o numero: ");
    scanf("%d", &n4);
    printf("Digite o 5o numero: ");
    scanf("%d", &n5);

    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) {
        maior = n1;
    } else if (n2 > n3 && n2 > n4 && n2 > n5) {
        maior = n2;
    } else if (n3 > n4 && n3 > n5) {
        maior = n3;
    } else if (n4 > n5) {
        maior = n4;
    } else {
        maior = n5;
    }

    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        menor = n1;
    } else if (n2 < n3 && n2 < n4 && n2 < n5) {
        menor = n2;
    } else if (n3 < n4 && n3 < n5) {
        menor = n3;
    } else if (n4 < n5) {
        menor = n4;
    } else {
        menor = n5;
    }

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);

    return 0;
}
