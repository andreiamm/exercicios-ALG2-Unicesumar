#include <stdio.h>

int main()
{
    int prato, bebida, cal;

    printf("1 - Italiano 2 - Japones 3 - Salvadorenho\n");
    printf("Informe o prato desejado: \n");
    scanf("%d", &prato);

    switch (prato) {
    case 1:
        cal = 750;
        break;
    case 2:
        cal = 324;
        break;
    case 3:
        cal = 545;
        break;
    default:
        printf("Valor invalido");
        break;
    }

    printf("1 - Cha 2 - Suco de laranja 3 - Refrigerante: \n");
    printf("Informe a bebida desejada: \n");
    scanf("%d", &bebida);

    switch (bebida) {
    case 1:
        cal += 30;
        break;
    case 2:
        cal += 80;
        break;
    case 3:
        cal += 90;
        break;
    default:
        printf("Valor invalido");
        break;
    }

    printf("\nTotal de calorias da refeicao: %d\n", cal);


    return 0;
}
