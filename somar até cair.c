#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int n, soma = 0, i = 0;
    float media;
    do {
        printf("diz um numero");
        scanf_s("%d", &n);
        soma = n + soma;
        i = i + 1;
    } while (soma < 1000);
    media = soma / i;
    printf("a soma dos numeros que escreveu e %.0f e escreveu %i numeros", media, i);
    return 0;
}


