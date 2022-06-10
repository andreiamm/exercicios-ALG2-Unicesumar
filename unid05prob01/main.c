#include <stdio.h>

float converter(float celsius);

int main()
{
    float celsius;

    printf("Temperatura em celsius: ");
    scanf("%f", &celsius);

    printf("\n%.1f graus celsius equivalem a %.1f graus Fahrenheit.", celsius, converter(celsius));

    return 0;
}

float converter(float c) {

    return 1.8 * c + 32.0;
}
