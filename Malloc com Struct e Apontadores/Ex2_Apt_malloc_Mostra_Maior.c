// Exercicio 2
// Apresente um programa em C que leia 2 números e mostre o maior deles sem usar variáveis estáticas.

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int *apt1, *apt2;
	
	if(!(apt1=malloc(sizeof(int))))
	{
		printf("Faltou memoria!\n");
		exit(1);
	}
	
	if(!(apt2=malloc(sizeof(int))))
	{
		printf("Faltou memoria!\n");
		exit(2);
	}
	
	printf("Digite um numero:\n");
	scanf("%i",apt1);
	printf("Digite um numero:\n");
	scanf("%i",apt2);
	
	if(*apt1>*apt2)
	{
		printf("O maior e: %i", *apt1);
	}
	else
	{
		printf("O maior e: %i", *apt2);
	}
	
	free(apt1);
	free(apt2);
	return 0;
}
