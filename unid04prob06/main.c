#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[15];

    printf("Informe a palavra: ");
    gets(palavra);

    for (int i = 0; i < strlen(palavra); i++) {
        printf("%s\n", palavra);
    }

    return 0;
}
