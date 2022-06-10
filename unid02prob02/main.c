#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    int idade;
    float mensalidade;

    printf("Informe o primeiro nome do cliente: ");
    scanf("%s", nome);
    printf("Informe a idade do cliente: ");
    scanf("%d", &idade);

    if (idade <=18) {
        mensalidade = 50.0;
    } else if (idade < 30) {
        mensalidade = 70.0;
    } else if (idade <= 45) {
        mensalidade = 90.0;
    } else if (idade < 65) {
        mensalidade = 130.0;
    } else {
        mensalidade = 170.0;
    }

    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Mensalidade: R$ %.2f\n", mensalidade);

    return 0;
}
