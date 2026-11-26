#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int altura[30], idade[30], soma = 0, i, contador = 0;
    float media;

    for (i = 0; i < 30; i++) {
        printf("Diz a altura do %d.º aluno: ", i + 1);
        scanf_s("%d", &altura[i]);
        printf("Diz a idade do %d.º aluno: ", i + 1);
        scanf_s("%d", &idade[i]);

        soma += altura[i];
    }
    media = (float)soma / 30;

    for (i = 0; i < 30; i++) {
        if (idade[i] > 13 && altura[i] < media) {
            contador++;
        }
    }
    printf("%d alunos com mais de 13 anos têm altura inferior à média %.0f\n", contador, media);

    return 0;
}