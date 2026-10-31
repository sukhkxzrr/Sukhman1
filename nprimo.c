#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int n, i, contar=0;

	printf("Fala um numero:");
	scanf("%i", &n);

	for (i = n; i >= 1; i--) {
		if (n % i == 0) {
			contar++;
		}
	}

	if (contar==2) {
		printf("O número é primo!\n");
	}
	else {
		printf("O número não é primo!\n");
	}
	
	return 0;
}
