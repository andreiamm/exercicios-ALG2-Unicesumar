#include <stdio.h>

int main()
{
    int n, i, primo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    i = 2;
    primo = 1;
    while (i < n && primo == 1) {
        if (n % i == 0) {
            primo = 0;
        }
        i++;
    }

    if (primo != 0) {
        printf("%d eh um numero primo", n);
    } else {
        printf("%d nao eh um numero primo", n);
    }

    return 0;
}
