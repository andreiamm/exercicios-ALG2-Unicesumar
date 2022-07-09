#include <stdio.h>
#include <stdlib.h>

int verifica(char c);

int main()
{
    char palavra[10];

    printf("palavra: ");
    scanf("%10[^\n]s", &palavra);

    for (int i = 0; i < strlen(palavra) ; i++) {
            printf("%d", verifica(palavra[i]));
    }

    return 0;
}

int verifica(char c) {

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 0;
    }

    return 1;
}
