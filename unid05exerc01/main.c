#include <stdio.h>
#include <locale.h>

int checkPositive(int num);

int main()
{
    setlocale(LC_ALL,"");

    int num;

    printf("N�mero: ");
    scanf("%d", &num);

    printf("O n�mero %d � %s", num, (checkPositive(num) == 1) ? "positivo" : "negativo");

    return 0;
}

int checkPositive(int num) {
    return (num > 0) ? 1 : 0;
}
