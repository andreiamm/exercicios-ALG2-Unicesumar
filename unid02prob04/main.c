#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    char sexo;

    printf("Informe o sexo: ");
    scanf("%c", &sexo);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    if (sexo == 'F') {
        printf("\nPeso ideal: %.1f\n", 62.1 * altura - 44.7);
    } else {
        printf("\nPeso ideal: %.1f\n", 72.7 * altura - 58.0);
    }

    return 0;
}
