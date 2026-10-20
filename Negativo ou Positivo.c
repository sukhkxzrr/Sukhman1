#include <stdio.h>
#include<locale.h>
int main() {

    int num;

    setlocale(LC_ALL, "");
    do {

        printf("Diz um numero: ");

        scanf_s("%d", &num);

        if (num > 0) {

            printf("O numero e positivo\n");

        }

        if (num < 0) {

            printf("O numero e negativo\n");

        }

        else {

            printf("Digitou 0....saí do programa\n");

        }

    } while (num != 0);

    return 0;

}
