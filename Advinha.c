#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int contador=0, n;
    srand(time(NULL));
    int num = rand() % 1000 + 1;
    do {
        printf("Diz um numero\n");
        scanf_s("%i", &n);

        if (n == num)
            printf("Ta Certo\n\n");
        else if (n < num)
            printf("E maior\n\n");
        else
            printf("E menor\n\n");

        contador++;

    } while (num != n);
    printf("Usou %d tentativas\n\n" , contador);

      return 0;
}