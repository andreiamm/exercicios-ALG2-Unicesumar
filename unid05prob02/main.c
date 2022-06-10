#include <stdio.h>

float converter(float q);

int main()
{
    float pesoKg;

    printf("Peso em kg: ");
    scanf("%f", &pesoKg);

    printf("%.2f kg equivale a %.2f libras\n", pesoKg, converter(pesoKg));

    return 0;
}

float converter(float q) {
    return q * 2.2046;
}
