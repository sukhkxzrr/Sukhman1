#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int i, n, maior, menor, quantos;
	printf("Quantos numeros tem a sua lista?");
	scanf_s("%d", &quantos);

	do {
		maior= -2147483648, menor =2147483647;
		for (i = 0; i < quantos; i++)
		{
			printf("Quais sao os numeros");
			scanf("%d", &n);

			if (n > maior) {
				maior = n;
			}
			if (n < menor) {
				menor = n;
			}
		}
	} while (n!=0);
	printf("O número maior é %i e O número menor é %i, TWIN...\n", maior, menor);

	return 0;
}
