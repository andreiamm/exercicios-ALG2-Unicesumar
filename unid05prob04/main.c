#include <stdio.h>
#include <stdlib.h>

int contaConsoantes(char str[20]);

int main()
{
    char str[20];

    printf("String: ");
    scanf("%20[^\n]s", str);

    printf("%s possui %d consoantes", str, contaConsoantes(str));

    return 0;
}

int contaConsoantes(char str[20]) {
    int n = strlen(str);
    str = strlwr(str);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            count++;
        }
    }
    return count;
}

