#include <stdio.h>

int main()
{
    int n = 5, troca;
    int vetA[n];
    int vetB[n];
    int vetC[n];

    printf("VETOR A\n");
    for (int i = 0; i < n; i++) {
         printf("%do elemento: ", i + 1);
         scanf("%d", &vetA[i]);
    }

    printf("\nVETOR B\n");
    for (int i = 0; i < n; i++) {
         printf("%do elemento: ", i + 1);
         scanf("%d", &vetB[i]);

         vetC[i] = vetA[i] + vetB[i];
    }

    for (int i = 0; i < n -1; i++) {
         for (int j = i + 1; j < n; j++) {
            if (vetC[i] > vetC[j]) {
                troca = vetC[i];
                vetC[i] = vetC[j];
                vetC[j] = troca;
            }
         }
    }

    printf("\nVETOR C\n");
    for (int i = 0; i < n; i++) {
            printf("%d\n", vetC[i]);
    }

    return 0;
}
