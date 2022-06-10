#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4;

    printf("Digite a 1a nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2a nota: ");
    scanf("%f", &nota2);
    printf("Digite a 3a nota: ");
    scanf("%f", &nota3);
    printf("Digite a 4a nota: ");
    scanf("%f", &nota4);

    printf("\nMedia = %.1f\n", (nota1 + nota2 + nota3 + nota4) / 4.0);

    return 0;
}
