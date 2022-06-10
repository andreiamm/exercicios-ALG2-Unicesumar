#include <stdio.h>

int main()
{
    int idade, somaIdade, contador;
    float altura, somaAltura;

    printf("Idade: ");
    scanf("%d", &idade);

    somaIdade = 0;
    somaAltura = 0.0;
    contador = 0;

    while (idade != 0) {
        printf("Altura: ");
        scanf("%f", &altura);

        somaIdade += idade;
        somaAltura += altura;
        contador++;

        printf("Idade: ");
        scanf("%d", &idade);
    }

    printf("Idade media: %.2f\n", (float)somaIdade / contador);
    printf("Altura media: %.2f\n", somaAltura / contador);

    return 0;
}
