#include <stdio.h>

int main()
{
    int opiniao, idade, somaIdade, qtdeSatisfatorio, qtdeInsatisfatorio;

    qtdeSatisfatorio = 0;
    qtdeInsatisfatorio = 0;
    somaIdade = 0;

    printf("Idade: ");
    scanf("%d", &idade);

    while (idade != 0) {
        printf("Digite 1 para satisfatorio, 2 para indiferente e 3 para insatisfatorio: ");
        scanf("%d", &opiniao);

        switch (opiniao) {
        case 1:
            qtdeSatisfatorio++;
            somaIdade += idade;
            break;
        case 2:
            break;
        case 3:
            qtdeInsatisfatorio++;
            break;
        default:
            printf("Numero invalido");
            break;
        }

        printf("Idade: ");
        scanf("%d", &idade);
    }

    printf("\nResponderam insatisfatorio: %d pessoas\n", qtdeInsatisfatorio);
    printf("Responderam satisfatorio: %d pessoas\n", qtdeSatisfatorio);
    printf("Media de idade de quem respondeu satisfatorio: %.2f anos\n", (float)somaIdade / qtdeSatisfatorio);

    return 0;
}
