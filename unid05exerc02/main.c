#include <stdio.h>
#include <locale.h>

int somaEntre(int n1, int n2);

int main()
{
    setlocale(LC_ALL,"");

    int n1, n2;

    printf("Primeiro número: ");
    scanf("%d", &n1);

    printf("Segundo número: ");
    scanf("%d", &n2);

    printf("A soma dos números entre %d e %d é: %d", n1, n2, somaEntre(n1,n2));

    return 0;
}

int somaEntre(int n1, int n2) {
    int soma = 0;

    for (int i = n1 + 1; i < n2; i++) {
        soma += i;
    }
    return soma;
}
