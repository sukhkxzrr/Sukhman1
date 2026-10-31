#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n=0;
		do
		{
			printf("diz aí um numero:");
			scanf_s("%i", &n);
			if (n != 0) {

				if (n % 3 == 0) {
					printf("o numero é multiplo de 3\n");
				}
				if (n % 5 == 0) {
					printf("o numero é multiplo de 5\n");
				}
			}
		} while (n != 0);
			printf("vou me embora..");
			return 0;
}

