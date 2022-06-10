#include <stdio.h>

void ler_texto(char *buffer, int length) {
     fgets(buffer, length, stdin);
     strtok(buffer, "\n");
}

int main()
{
    char frase[50];
    int n;

    printf("Frase: ");
    ler_texto(frase, 50);
    printf("Repeticoes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", frase);
    }

    return 0;
}
