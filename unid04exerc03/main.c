#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[15];

    printf("Palavra: ");
    gets(palavra);

    strlwr(palavra);

    if (strlen(palavra) % 2 != 0) {
        for (int i = 0; i < strlen(palavra); i++) {
            if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
                printf("%c ", palavra[i]);
            }
        }
     } else {
        printf("%s tem tamanho par", palavra);
     }

    return 0;
}
