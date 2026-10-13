#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    int kmi, kmf, litros;
    float valor;
    printf("escreve os kmi");
    scanf_s("%d", &kmi);
    printf("escreve os kmf");
    scanf_s("%d", &kmf);
    printf("escreve os litos gastos");
    scanf_s("%d", &litros);
    valor = litros * 100 / (kmf - kmi);
    printf("o seu carro gastou %.1f litros"), valor;
}
