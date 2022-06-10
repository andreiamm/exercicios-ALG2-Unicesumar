#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    printf("Digite um numero positivo inteiro: ");
    scanf("%d", &numero);

    printf("\nO quadrado de %d eh %.1f\n", numero, pow(numero, 2));
    printf("A raiz quadrada de %d eh %.1f\n", numero, sqrt(numero));

    return 0;
}
