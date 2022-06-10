#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("nao eleitor");
    } else if (idade < 18 || idade >= 65) {
        printf("Eleitor facultativo");
    } else {
        printf("Eleitor obrigatorio");
    }
    return 0;
}
