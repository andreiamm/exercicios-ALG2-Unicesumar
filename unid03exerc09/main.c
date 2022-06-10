#include <stdio.h>

int main()
{
    char comodo[30];
    float largura, comprimento, soma;

    printf("Comodo: ");
    scanf("%s", comodo);

    while (strcmp(comodo, "FIM") != 0) {
        printf("Largura em m2: ");
        scanf("%f", &largura);
        printf("Comprimento em m2: ");
        scanf("%f", &comprimento);

        soma += largura * comprimento;

        printf("digite o nome do comodo ou FIM para finalizar: ");
        scanf("%s", comodo);
    }

    printf("Area total = %.2f m2\n", soma);

    return 0;
}
