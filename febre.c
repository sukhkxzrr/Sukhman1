#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	float tmi, tmf;
	printf("Diz a temp inicial\n ");
	scanf_s("%f", &tmi);
	printf("Diz a temp final\n ");
	scanf_s("%f", &tmf);

	if (tmi < 35.5 || tmf < 35.5) 
		printf("És anfíbio\n");
	else if ((tmi > 35.5 && tmi < 37) && (tmf > 35.5 && tmf < 37)) 
		printf("Temperatura Normal\n");
	else {
		if (tmi > tmf)
			printf("Temperatura Baixou\n");
		else if (tmi < tmf)
			printf("Temeperatura Aumentou\n");
		else
			printf("Temperatura manteve\n");
	}
}
