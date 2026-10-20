#include <stdio.h>

int main() {

    int n;

    do {
        
        printf("Digite um numero: ");
        scanf_s("%d", &n);

        if (n==0) {

            printf("Digitou 0....vai sair do programa\n");


        }

        else if (n%2==0) {

            printf("O numero %d e par\n", n);



        }

        else {

            printf("O numero %d e impar\n", n);


        }


    } while (n!=0);
    return 0;

}
