#include <stdio.h>
#include <locale.h>

struct Livros {
    char titulo[50];
    char autor[50];
    char editora[20];
    int edicao;
    int ano;
};

int main()
{
    setlocale(LC_ALL,"");

    int n = 3;
    struct Livros livro[n];

    for (int i = 0; i < n; i++) {
        printf("DADOS DO %do LIVRO:\n", i + 1);
        printf("Título: ");
        fflush(stdin);
        scanf("%50[^\n]s", &livro[i].titulo);
        printf("Autor: ");
        fflush(stdin);
        scanf("%50[^\n]s", &livro[i].autor);
        printf("Editora: ");
        fflush(stdin);
        scanf("%20[^\n]s", &livro[i].editora);
        printf("Edição: ");
        scanf("%d", &livro[i].edicao);
        printf("Ano: ");
        scanf("%d", &livro[i].ano);
        printf("\n");
    }

    printf("***** LIVROS CADASTRADOS: *****\n");
        for (int i = 0; i < n; i++) {
        printf("DADOS DO %do LIVRO:\n", i + 1);
        printf("Título: %s\n", livro[i].titulo);
        printf("Autor: %s\n", livro[i].autor);
        printf("Editora: %s\n", livro[i].editora);
        printf("%da Edição\n", livro[i].edicao);
        printf("Ano: %d\n", livro[i].ano);
        printf("\n");
    }

    return 0;
}
