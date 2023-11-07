// Exercicio 2 - A
// Escreva um programa em C que leia 10 numeros e localize o menor
#include<stdio.h>
int main(void)
{
	int vetor[10], i, menor;
	
	for(i=0;i<10;i++)
	{
		printf("Digite o numero da posicao %i\n", i+1);
		scanf("%i",&vetor[i]);
	}
	
	menor = vetor[0];
	
	for(i=1;i<10;i++)
	{
		if(vetor[i]<menor)
		{
			menor = vetor[i];
		}
	}
	printf("Menor: %i\n", menor);
	
	return 0;
}
