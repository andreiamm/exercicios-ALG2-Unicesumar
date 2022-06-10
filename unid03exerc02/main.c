#include <stdio.h>

int main()
{
    int n;
    float s;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    s = 1.0;
    for (int i = 2; i <=n; i++) {
        s += 1.0 / i;
    }

    printf("S = %.2f\n", s);


    return 0;
}
