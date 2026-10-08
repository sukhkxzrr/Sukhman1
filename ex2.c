#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int L;
    float area, perimetro;

    printf("Diz um lado do quadrado: ");
    scanf_s("%d", &L);

    area = (float)(L * L);
    printf("A area do quadrado = %.2f\n", area);

    perimetro = (float)(L * 4);
    printf("O perimetro do quadrado = %.2f\n", perimetro);
    return 0;
}
