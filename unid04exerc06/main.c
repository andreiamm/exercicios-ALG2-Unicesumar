#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Turma {
    char nome[50];
    float nota[4];
    float media;
} troca, aluno[5];

int main()
{
    setlocale(LC_ALL,"");

    float somaNotas;

    for (int i = 0; i < 5; i++) {
        printf("DADOS DO %dO ALUNO:\n", i + 1);
        printf("Nome: ");
        fflush(stdin);
        scanf("%50[^\n]s", &aluno[i].nome);

        somaNotas = 0;
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &aluno[i].nota[j]);
            somaNotas += aluno[i].nota[j];
        }

        aluno[i].media = somaNotas / 4.0f;

        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (aluno[i].media > aluno[j].media) {
                    troca = aluno[i];
                    aluno[i] = aluno[j];
                    aluno[j] = troca;
                }
            }
    }

    printf("CLASSIFICAÇÃO (menor para maior):\n");
    for (int i = 0; i < 5; i++) {
            printf("%s (media %.2f)\n", aluno[i].nome, aluno[i].media);
    }

    return 0;
}
