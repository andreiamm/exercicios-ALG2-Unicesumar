#include <stdio.h>

int main()
{
    printf("Numeros divisiveis por 3 ate 100:\n");
    for (int i = 3; i <= 99; i+=3) {
            printf("%d | ", i);
    }

    return 0;
}
