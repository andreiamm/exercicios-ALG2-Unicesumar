#include <stdio.h>

int main()
{
   int n, fat;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }

    printf("Fatorial de %d = %d", n, fat);

    return 0;
}
