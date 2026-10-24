#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
int i=0, n, maior, menor;

	do {
		printf("Diz aí um número, TWIN: ");
		scanf_s("%i", &n);

		if (n != 0) {
			if (i==0) {
				i=1;
				maior=n;
				menor=n;
			}
			else {
				if (n>maior) {
					maior=n;
				}
				if (n<menor) {
					menor=n;
				}
			}
		}
	} while (n != 0);
	
	printf("O maior número é %i, TWIN...\n", maior);
	printf("O menor número é %i, TWIN...\n", menor);
	return 0;
}
