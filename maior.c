#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    float N1, N2, N3;
    printf("Diz o primeiro numero");
    scanf_s("%f", &N1);
    printf("Diz o segundo numero");
    scanf_s("%f", &N2);
    printf("Diz o tereceiro numero");
    scanf_s("%f", &N3);
    if (N1 > N2 && N1 > N3) {
        printf("O N1 é o maior");
    }
    else if (N2 > N3) {
        printf("O N2 é o maior");
    }
    else {
        printf("O N3 é o maior");
    }

        return 0;
}