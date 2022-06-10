#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deposito, taxaJuros;

    printf("Informe o valor do deposito: R$ ");
    scanf("%f", &deposito);
    printf("Informe a taxa de juros: ");
    scanf("%f", &taxaJuros);

    printf("\nRendimento = %.2f\n", deposito * taxaJuros);
    printf("Total = %.2f\n", deposito + deposito * taxaJuros);

    return 0;
}
