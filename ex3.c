#include <stdio.h>
#include <locale.h>

int main(void) 
{
    setlocale(LC_ALL, "");

    int b, h;
    float area, perimetro;

    printf("Diz o comprimento da base : ");
    scanf_s("%d", &b);
    printf("Diz o comprimento da altura : ");
    scanf_s("%d", &h);

    area = (float)(b * h)+ (b * h);
    printf("A area do retangulo = %.2f\n", area);

    perimetro = (float)(b + h+b+h);
    printf("O perimetro do retangulo = %.2f\n", perimetro);
    return 0;
}