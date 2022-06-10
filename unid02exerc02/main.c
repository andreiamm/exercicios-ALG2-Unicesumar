#include <stdio.h>

int main()
{
    int n;

    printf("Informe o numero: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 7 == 0) {
        printf("%d eh divisivel por 3 e por 7\n", n);
    } else if (n % 3 == 0) {
        printf("%d eh divisivel apenas por 3\n", n);
    } else if (n % 7 == 0) {
        printf("%d eh divisivel apenas por 7\n", n);
    } else {
        printf("%d nao eh divisivel nem por 3 e nem por 7\n", n);
    }

    return 0;
}
