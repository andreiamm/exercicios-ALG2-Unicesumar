#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Livro {
    int codigo;
    char titulo[50];
    char autor [50];
    char area [50];
    int ano;
    char editora [50];
};

int main()
{
    setlocale(LC_ALL,"");

    int i, opcao, n = 3, busca, achou;
    struct Livro obra[n];
    struct Livro troca;

    printf("Digite uma op��o\n1: Cadastrar livro\n");
    printf("2: Imprimir as informa��es dos livros\n");
    printf("3: Pesquisar livros por c�digo\n");
    printf("4: Ordenar os livros por ano\n");
    printf("5: Sair do programa\n");
    scanf("%d", &opcao);

    while (opcao != 5 ) {

        switch (opcao) {
        case 1:
            printf("\nCADASTRAR LIVROS\n");
            for (i = 0; i < n; i++) {
                printf("\nDADOS DO %do LIVRO:\n", i + 1);
                printf("C�digo: ");
                scanf("%d", &obra[i].codigo);
                printf("T�tulo: ");
                fflush(stdin);
                scanf("%50[^\n]s", obra[i].titulo);
                //ler_texto(obra[i].titulo, 50);
                printf("Autor: ");
                fflush(stdin);
                scanf("%50[^\n]s", obra[i].autor);
                //ler_texto(obra[i].autor, 50);
                printf("�rea: ");
                fflush(stdin);
                scanf("%50[^\n]s", obra[i].area);
                //ler_texto(obra[i].area, 50);
                printf("Ano: ");
                scanf("%d", &obra[i].ano);
                printf("Editora: ");
                fflush(stdin);
                scanf("%50[^\n]s", obra[i].editora);
                //ler_texto(obra[i].editora, 50);
            }
            break;
        case 2:
            printf("\nINFORMA��ES DOS LIVROS\n");
            for (i = 0; i < n; i++) {
                printf("Livro %d (Codigo %d): %s, de %s, area: %s, ano: %d, editora %s\n", i + 1, obra[i].codigo, obra[i].titulo, obra[i].autor, obra[i].area, obra[i].ano, obra[i].editora);
            }
            break;
        case 3:
            printf("\nPESQUISAR LIVRO POR C�DIGO\n");
            printf("Codigo do livro: ");
            scanf("%d", &busca);

            i = 0;
            achou = 0;
            while ((achou == 0) && (i < n)) {
                if (obra[i].codigo == busca) {
                    achou = 1;
                } else {
                    i++;
                }
            }

            if (achou == 1) {
                printf("Livro encontrado na posi��o %d\n", i);
            } else {
                printf("O livro n�o foi encontrado");
            }

            break;
        case 4:
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (obra[i].ano > obra[j].ano) {
                        troca = obra[i];
                        obra[i] = obra[j];
                        obra[j] = troca;
                    }
                }
            }

            printf("\nLIVROS ORDENADOS POR ANO\n");
            for (i = 0; i < n; i++) {
                printf("Livro %d (Codigo %d): %s, de %s, �rea: %s, ano: %d, editora %s\n", i + 1, obra[i].codigo, obra[i].titulo, obra[i].autor, obra[i].area, obra[i].ano, obra[i].editora);
            }

            break;
        case 5:
            break;
        default:
            printf("\nC�digo Inv�lido!\n");
            break;
        }
        printf("\n********************************************\n");
        printf("Digite uma op��o:\n1: Cadastrar livro\n");
        printf("2: Imprimir as informa��es dos livros\n");
        printf("3: Pesquisar livros por c�digo\n");
        printf("4: Ordenar os livros por ano\n");
        printf("5: Sair do programa\n");
        scanf("%d", &opcao);
    }


    return 0;
}
