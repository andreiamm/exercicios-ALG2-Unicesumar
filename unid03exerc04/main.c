#include <stdio.h>

int main()
{
    int soma = 0;

    for (int i = 201; i < 500; i += 2) {
        soma += i;
    }

    printf("Soma dos ímpares entre 200 e 500 = %d\n", soma);
    return 0;
}
