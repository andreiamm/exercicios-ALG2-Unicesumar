#include <stdio.h>
#include <string.h>

int main()
{
    char nome[10];

    printf("Digite um nome: ");
    scanf("%s", nome);

    for (int i = 0; i < strlen(nome); i = i + 2) {
        printf("%c ", nome[i]);
    }

    return 0;
}
