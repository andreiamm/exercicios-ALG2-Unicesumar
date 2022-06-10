#include <stdio.h>

int main()
{
    int numero, quantidade;
    char data[10];
    float preco, soma;

    printf("Numero do pedido: ");
    scanf("%d", &numero);

    soma = 0;
    while (numero != 0) {
        printf("Data do pedido: ");
        scanf("%s", data);
        printf("preco unitario: R$ ");
        scanf("%f", &preco);
        printf("Quantidade: ");
        scanf("%d", &quantidade);

        soma += preco * quantidade;

        printf("Numero do pedido: ");
        scanf("%d", &numero);
    }

    printf("Valor total dos pedidos: R$ %.2f\n", soma);

    return 0;
}
