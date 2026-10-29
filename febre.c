#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	float tmi, tmf;

	printf("diz a temp inicial ");
	scanf_s("%f", &tmi);
	printf("diz a temp final ");
	scanf_s("%f", &tmf);

	if (tmi <= 35.5 || tmf <= 35.5)
	{
		printf("ANIFIBIOO\n");
	}
		else if (tmi<=37 || tmf <= 37)
			printf("Normal");

		
}