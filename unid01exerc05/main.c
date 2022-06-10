#include <stdio.h>
#include <math.h>

int main()
{
    float raio;
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    printf("\nArea = %.1f\n", M_PI * pow(raio, 2));
    printf("Perimetro = %.1f\n", 2 * M_PI * raio);

    return 0;
}
