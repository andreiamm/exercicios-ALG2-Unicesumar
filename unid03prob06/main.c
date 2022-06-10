#include <stdio.h>

int main()
{
    float salario, somaSalario, maiorSalario;
    int filhos, somaFilhos, contador;

    printf("Salario: ");
    scanf("%f", &salario);

    maiorSalario = salario;
    somaSalario = 0.0;
    somaFilhos = 0;
    contador = 0;

    while (salario != -1.0) {
        printf("Numero de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        contador++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        printf("Salario: ");
        scanf("%f", &salario);
    }

    printf("Media de salario da populacao: %.2f\n", somaSalario / contador);
    printf("Media de filhos da populacao: %.2f\n", (float)somaFilhos / contador);
    printf("maior salario: %.2f\n", maiorSalario);

    return 0;
}
