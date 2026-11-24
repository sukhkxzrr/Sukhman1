#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	char* Nomes[5] = { "Beatriz","Tiago","Inês","Catarina","Clara" };
	int i=0;

	for (int i = 4; i <= 4; i--) {
		printf("%s\n", Nomes[i]);
	}
	return 0;
}