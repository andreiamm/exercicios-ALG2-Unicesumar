#include <stdio.h>
#include <locale.h>

struct Funcionarios {
    int matricula;
    char nome[50];
    char setor[20];
    float salario;
};

int main()
{
    setlocale(LC_ALL,"");

    int matr, i, achou, n = 3;
    struct Funcionarios func[n];

    for (int i = 0; i < n; i++) {
        printf("DADOS DO %do FUNCIONÁRIO:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &func[i].matricula);
        printf("Nome: ");
        fflush(stdin);
        scanf("%50[^\n]s", &func[i].nome);
        printf("Setor: ");
        fflush(stdin);
        scanf("%20[^\n]s", &func[i].setor);
        printf("Salário: ");
        scanf("%f", &func[i].salario);
    }

    printf("\ninforme a matrícula ou digite 0 para sair: ");
    scanf("%d", & matr);

    while (matr != 0) {

        i = 0;
        achou = 0;
        while (i < n && achou == 0) {
            if (func[i].matricula == matr) {
                achou = 1;
                printf("matrícula %d: %s, setor: %s, salário: R$ %.2f\n", matr, func[i].nome, func[i].setor, func[i].salario);
            }
            i++;
        }

        if (achou == 0) {
            printf("Funcionário nao encontrado\n");
        }

        printf("informe a matrícula ou digite 0 para sair: ");
        scanf("%d", & matr);
    }
    return 0;
}
