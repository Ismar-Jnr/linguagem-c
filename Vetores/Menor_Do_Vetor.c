// Exercicio 2-A 
//Escreva um programa em C que leia 10 numeros e localize o menor valor deste vetor
#include<stdio.h>

int main(void)
{
	int vetor[10], i=0, menor;

	printf("Digite o numero da posicao %i\n", i+1);
	scanf("%i",&vetor[i]);
	
	menor = vetor[i];
	
	for(i=1;i<10;i++)
	{
		printf("Digite o numero da posicao %i\n", i+1);
		scanf("%i", &vetor[i]);
		
		if(menor>=vetor[i])
		{
			menor = vetor[i];
		}
	}
	
	printf("menor numero do vetor e %i",menor);
	
	return 0;
}
