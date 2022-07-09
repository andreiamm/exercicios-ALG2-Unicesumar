#include <stdio.h>
#include <locale.h>

float converteParaDolares(float cotacao, float valor);

int main()
{
    setlocale(LC_ALL,"");

    float cotacao, reais;

    printf("Cotação do dólar: ");
    scanf("%f", &cotacao);
    printf("Quantia em reais: R$ ");
    scanf("%f", &reais);

    printf("Equivalente em dólares: %.2f", converteParaDolares(cotacao, reais));

    return 0;
}

float converteParaDolares(float cotacao, float valor) {
    return valor / cotacao;
}
