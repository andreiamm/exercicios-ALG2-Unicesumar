#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 5 == 0) {
        printf("%d eh divisivel por 5", n);
    } else {
        printf("%d nao eh divisivel por 5", n);
    }

    return 0;
}
