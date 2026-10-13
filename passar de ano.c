#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    float nota;
    printf("escreve a sua nota");
    scanf_s("%f", &nota);
    if (nota > 9.5) {
        printf("aprovado");
    }
    else {
        printf("reprovado");
    }

    return 0;
}