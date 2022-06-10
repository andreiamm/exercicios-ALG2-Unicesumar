#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    char palavra[15];
    int repeticoes;

    printf("Palavra: ");
    gets(palavra);
    printf("Repetições: ");
    scanf("%d", &repeticoes);

    for (int i = 0; i < repeticoes; i++) {
        printf("%s\n", palavra);
    }

    return 0;
}
