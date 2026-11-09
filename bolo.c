#include<stdio.h>

int main()
{
	int pessoas, fatias, fatias_por_pessoa, resto;

	printf("Quantas pessoas sao???\n");
	scanf_s("%d", &pessoas);
	printf("Quantas fatias sao???\n");
	scanf_s("%d", &fatias);

	fatias_por_pessoa = fatias / pessoas;
	resto = fatias % pessoas;

	printf("cada pessoa come %d fatias de bolo\n", fatias_por_pessoa);
	printf("Doa-se %d fatias para o banco alimentar\n", resto);

	return 0;
}