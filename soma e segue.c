#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int quantidade, i=0;
    float n, soma = 0;

    printf("Quantos numeros quer somar? ");
    scanf_s("%d", &quantidade);

    while (i < quantidade) {
        printf("Digite um numero: ");
        scanf("%f", &n);
        soma = soma + n;
        i++;
    }
    printf("A soma dos numeros e: %.0f\n", soma);
    return 0;
}
