#include <stdio.h>

int main()
{
    float b, B, h;

    printf("Digite o valor da base menor, base maior e altura do trapezio:\n");
    scanf("%f %f %f", &b, &B, &h);

    printf("\nArea do trapezio = %.1f\n", (b + B) * h / 2);

    return 0;
}
