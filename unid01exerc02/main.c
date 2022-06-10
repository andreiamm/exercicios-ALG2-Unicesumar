#include <stdio.h>

int main()
{
    char nome[30];

    printf("Informe seu nome: ");
    scanf("%s", &nome);

    printf("\nBem-vindo(a) a disciplina de Algoritmos e Logica de Programacao II, %s\n", nome);

    return 0;
}
