#include <stdio.h>
#include <math.h>

int main()
{
    int numero1, numero2;

    printf("Digite o 1o numero: ");
    scanf("%d", &numero1);
    printf("Digite o 2o numero: ");
    scanf("%d", &numero2);

    printf("\nResultado = %.0f\n", pow(numero1, numero2));

    return 0;
}
