#include <stdio.h>

struct Cadastro {
    char nome[50];
    char telefone[20];
    char email[50];
};

int main()
{
    int n = 3;
    struct Cadastro pessoa[n];

    for (int i = 0; i < n; i++) {
        printf("DADOS DA %da PESSOA:\n", i + 1);
        printf("Nome: ");
        fflush(stdin);
        scanf("%50[^\n]s", &pessoa[i].nome);
        printf("Telefone: ");
        fflush(stdin);
        scanf("%20[^\n]s", &pessoa[i].telefone);
        printf("Email: ");
        fflush(stdin);
        scanf("%50[^\n]s", &pessoa[i].email);
        printf("\n");
    }

    printf("***** PESSOAS CADASTRADOS: *****\n");
        for (int i = 0; i < n; i++) {
        printf("DADOS DA %da PESSOA:\n", i + 1);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Telefone: %s\n", pessoa[i].telefone);
        printf("Email: %s\n", pessoa[i].email);
        printf("\n");
    }

    return 0;
}
