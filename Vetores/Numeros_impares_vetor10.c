//Q6 - Escreva um programa que carregue um vetor d 10 posiçoes com numeros impares digitados pelo usuario
#include<stdio.h>

int main(void)
{
	int vetor[10],i;
	
	
	for(i=0;i<10;i++)
	{
		vetor[i]= 2;
		while((vetor[i]%2) ==0)
		{
			printf("Digite um numero impar na posicao %i: \n",i+1);
			scanf("%i",&vetor[i]);
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%i \n", vetor[i]);
	}
	
	return 0;
	 
	 
	 
	 
}
