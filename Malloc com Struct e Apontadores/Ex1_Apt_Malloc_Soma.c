//Exercicio 1.
// Escreva um programa em C que leia 2 n�meros e mostre sua soma sem usar variaveis est�ticas.
// Use apenas apontadores e aloca��o din�mica de mem�ria.
#include<stdio.h>
#include<stdlib.h>
	
	int main(void)
	{
	
		int *apt, *apt2;
		
		if(!(apt=malloc(sizeof(int))))
			{
			printf("Faltou memoria!\n");
			exit(1);
			}			
			printf("Digite o valor:\n");
			scanf("%i",apt);
			
		if(!(apt2=malloc(sizeof(int))))
			{
			printf("Faltou memoria!\n");
			exit(1);
			}		
		
			printf("Digite o valor:\n");
			scanf("%i",apt2);
		
			
		printf("Soma: %i", *apt + *apt2);
			
			free(apt);
			free(apt2);			
			return 0;
	}
