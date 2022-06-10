#include <stdio.h>

int main()
{
    int codAluno, qtdeNotas, qtdeAprovados = 0, qtdeReprovados = 0;
    float nota, somaNota, media;

    printf("Codigo do aluno: ");
    scanf("%d", &codAluno);

    while (codAluno != 0) {
        somaNota = 0;
        printf("Quantidade de notas: ");
        scanf("%d", &qtdeNotas);

        for (int i = 1; i <= qtdeNotas; i++) {
            printf("%da nota: ", i);
            scanf("%f", &nota);
            somaNota += nota;
        }

        media = somaNota / qtdeNotas;

        if (media >= 6.0) {
            qtdeAprovados++;
        } else {
            qtdeReprovados++;
        }

        printf("\nCodigo do aluno: ");
        scanf("%d", &codAluno);
    }

    printf("\nAprovados: %d\n", qtdeAprovados);
    printf("Reprovados: %d\n", qtdeReprovados);

    return 0;
}
