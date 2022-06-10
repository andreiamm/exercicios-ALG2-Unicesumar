#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int n;
    double medias[4], somaMedias = 0;

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    double notas[n][4];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%da nota do %do aluno: ", j + 1, i + 1);
            scanf("%lf", &notas[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
            medias[i] = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3]) / 4.0;
    }

    printf("Média de cada aluno:\n");
    for (int i = 0; i < n; i++) {
            printf("Aluno %d: %.1lf\n", i + 1, medias[i]);
            somaMedias += medias[i];
    }

    printf("Média da turma: %.1lf", somaMedias / n);

    return 0;
}
