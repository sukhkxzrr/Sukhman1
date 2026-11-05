#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	char type;
	float Resultado, n1, n2;

	printf("Adiconar, Subtrair, Multiplicar ou Dividir (A, S, M, D)\n");
	scanf_s("%c", &type);

	printf("Diz o primeiro Numero\n");
	scanf_s("%f", &n1);
	printf("Diz o segundo Numero\n");
	scanf_s("%f", &n2);

	switch (type) {
	case 'A':
	case 'a':
		Resultado = n1 + n2;
		break;
	case 'S':
	case 's':
		Resultado = n1 - n2;
		break;
	case 'M':
	case 'm':
		Resultado = n1 * n2;
		break;
	case 'D':
	case 'd':
		Resultado = n1 / n2;
		break;
	default:
		printf("FAZ tu... pq isso n existe!!");
	}
	printf("%0.f\n\n", Resultado);
	
	return 0;
}




