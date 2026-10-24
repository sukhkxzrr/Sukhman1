#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n,i;
	printf("diz aí um numero:");
	scanf_s("%i", &n);
	for(i=1; i<11; i++)
	{
		printf("%ix%i=%i\n", n,i,n*i);
	}
	return 0;
}
