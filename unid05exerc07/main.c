#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    FILE *arq;
    char palavra[50];

    arq = fopen("arquivo.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    else {
        for (int i = 0; i < 10; i++) {
            printf("palavra: ");
            fflush(stdin);
            scanf("%50[^\n]s", palavra);

            fprintf(arq, "%s\n", palavra);
        }

        fclose(arq);
    }

    arq = fopen("arquivo.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    else {
        while (fgets(palavra, sizeof(palavra), arq) != NULL) {
               printf("%s", palavra);
        }
    }

    fclose(arq);
    return 0;
}
