#include <stdio.h>

int main()
{
    int codigo;
    float salario;

    printf("Informe o cargo do funcionario: \n");
    printf("(1 - Servente | 2 - Pedreiro | 3 - Mestre de obras | 4 - Tecnico de seguranca): ");
    scanf("%d", &codigo);
    printf("Informe o salario atual do funcionario: ");
    scanf("%f", &salario);

    switch (codigo) {
    case 1:
        printf("Cargo: Servente\n");
        printf("Aumento: 40%%\n");
        printf("Novo salario: %.2f\n", salario + salario * 0.4);
        break;
    case 2:
        printf("Cargo: Pedreiro\n");
        printf("Aumento: 35%%\n");
        printf("Novo salario: %.2f\n", salario + salario * 0.35);
        break;
    case 3:
        printf("Cargo: Mestre de obras\n");
        printf("Aumento: 20%%\n");
        printf("Novo salario: %.2f\n", salario + salario * 0.2);
        break;
    case 4:
        printf("Cargo: Tecnico de seguranca\n");
        printf("Aumento: 10%%\n");
        printf("Novo salario: %.2f\n", salario + salario * 0.1);
        break;
    default:
        printf("Codigo invalido");
        break;
    }

    return 0;
}
