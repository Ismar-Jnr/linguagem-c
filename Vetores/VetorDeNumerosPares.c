// Escreva um programa em C que carregue um vetor de 5 inteiros com numeros pares
#include<stdio.h>
int main(void)
{
	int vetor[5];
	int i;
	
		for(i=0;i<5;i++)
		{
			do
			{
				printf("Digite o valor da posicao %i\n", i+1);
				scanf("%i", &vetor[i]);
			}
			while((vetor[i] % 2)!= 0);	
		}
		
		for(i=0;i<5;i++)
		{
			printf("Posicao %i do vetor: %i\n", i+1, vetor[i]);
		}
}
