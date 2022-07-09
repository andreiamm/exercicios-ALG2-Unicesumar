#include <stdio.h>

int SumEven(int n);

int main()
{
    int num;

    printf("Operador: ");
    scanf("%d", &num);

    printf("Soma dos pares: %d", SumEven(num));

    return 0;
}

int SumEven(int n) {
    int sum = 0;

    for (int i = 0; i <= n; i += 2) {
        sum += i;
    }

    return sum;
}
