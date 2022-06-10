#include <stdio.h>

int main()
{
    int idade, estadoCivil, casados, solteiros, separados, viuvos, somaIdade;
    float peso, somaPeso;
    char sexo;

    printf("Idade: ");
    scanf("%d", &idade);

    somaIdade = 0;
    somaPeso = 0;
    solteiros = 0;
    casados = 0;
    separados = 0;
    viuvos = 0;
    while (idade != 0) {
        printf("Peso: ");
        scanf("%f", &peso);
        printf("Sexo: ");
        scanf("%c", &sexo (M/F));
        printf("Estado civil (1: solteiro(a) | 2: casado(a) | 3: separado(a)/divorciado(a) | 4: viuvo(a)): ");
        scanf("%d", &estadoCivil);

        somaIdade += idade;
        somaPeso += peso;

        switch (estadoCivil) {
        case 1:
            solteiros++;
            break;
        case 2:
            casados++;
            break;
        case 3:
            separados++;
            break;
        case 4:
            viuvos++;
            break;
        }

        printf("Idade: ");
        scanf("%d", &idade);
    }

    printf("Total de casados: %d\n", casados);
    printf("Total de solteiros: %d\n", solteiros);
    printf("Total de separados / divorciados: %d\n", separados);
    printf("Total de viuvos: %d\n", viuvos);
    printf("Media de idade: %.2f\n", (float)somaIdade / (casados + solteiros + separados + viuvos));
    printf("Media de peso: %.2f\n", somaPeso / (casados + solteiros + separados + viuvos));
    return 0;
}
