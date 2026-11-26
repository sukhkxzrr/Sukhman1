#include <stdio.h>

int main() {
    float n[10];
    int opcao;
    int qtdNegativos = 0;
    float somaNegativos = 0.0;

    printf("Introduza 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf_s ("%f", &n[i]);
    }
    printf("O que quer calcular?????\n");
    printf("1 - QUANTOS numeros NEGATIVOS foram introduzidos\n");
    printf("2 - SOMA dos numeros NEGATIVOS que foram introduzidos\n");
    printf("(1 ou 2)");
    scanf_s("\n%d", &opcao);

    if (opcao == 1) {
        for (int i = 0; i < 10; i++) {
            if (n[i] < 0) {
                qtdNegativos++;
            }
        }
        printf("\nForam introduzidos %d numeros negativos.\n", qtdNegativos);
    }
    else if (opcao == 2) {
        for (int i = 0; i < 10; i++) {
            if (n[i] < 0) {
                somaNegativos += n[i];
            }
        }
        printf("\nA soma dos numeros negativos e: %.0f\n", somaNegativos);
    }

    return 0;
}