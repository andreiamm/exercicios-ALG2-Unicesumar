#include <stdio.h>

int main()
{
    int origem, carga;
    float pesoToneladas, pesoQuilos, preco, imposto;

    printf("Codigo do estado de origem da carga: ");
    scanf("%d", &origem);
    printf("Codigo da carga: ");
    scanf("%d", &carga);
    printf("Peso da carga em toneladas: ");
    scanf("%f", &pesoToneladas);

    pesoQuilos = pesoToneladas * 1000.0;

    if (carga >= 10 && carga <= 20) {
        preco = 180.0 * pesoQuilos;
    } else if (carga <= 30) {
        preco = 120.0 * pesoQuilos;
    } else if (carga <= 40) {
        preco = 230.0 * pesoQuilos;
    } else {
        printf("Codigo da carga invalido");
    }

    switch (origem) {
    case 1: imposto = preco * 0.2;
        break;
    case 2: imposto = preco * 0.15;
        break;
    case 3: imposto = preco * 0.10;
        break;
    case 4: imposto = preco * 0.05;
        break;
    default: printf("Codigo do estado de origem da carga invalido");
        break;
    }

    printf("Peso da carga em quilos: %.2f\n", pesoQuilos);
    printf("Preco da carga: R$ %.2f\n", preco);
    printf("Valor do imposto: R$ %.2f\n", imposto);
    printf("Valor total da carga: R$ %.2f\n", preco + imposto);

    return 0;
}
