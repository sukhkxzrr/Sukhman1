#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chave[5], aposta[5], acertou = 0, aux, i, j;
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        chave[i] = rand() % 50 + 1;
        do {
            printf("Numero %d (1-50): ", i + 1);
            scanf_s("%d", &aposta[i]);
        } while (aposta[i] < 1 || aposta[i] > 50);
    }
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (chave[i] > chave[j]) {
                aux = chave[i];
                chave[i] = chave[j];
                chave[j] = aux;
            }
        }
        for (j = 0; j < 5; j++) {
            if (aposta[i] == chave[j]) acertou++;
        }
    }
    printf("\nChave: ");
    for (i = 0; i < 5; i++) printf("%d ", chave[i]);
    printf("\nAcertou: %d\n", acertou);
    if (acertou == 5) printf("bravo.... ganhou 1 MILHÃO de bitcoins YAYAYAYAYAYYAY\n");
    return 0;
}