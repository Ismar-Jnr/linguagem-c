//	3 - Preciso apresentar as notas de uma prova que ficaram abaixo da média da prova.		
#include<stdio.h>

int main(void)
{
	int qtd=5;
	float notas[qtd], soma = 0.0,media = 0.0;
	
		
	for(int i = 0; i<qtd; i++)
	{
		printf("Digite a nota %i\n",i+1);
		scanf("%f", &notas[i]);
	}	
	
	for(int i = 0; i<qtd; i++)
	{
		soma = soma + notas[i];
	}
	media = soma/qtd;
	printf("A media foi %f\n", media);
		
	
	for(int i =0; i<qtd; i++)
	{
		if(notas[i] < media)
		{
			printf("Notas abaixo da media: %f\n", notas[i]);
		}
	}
	
}