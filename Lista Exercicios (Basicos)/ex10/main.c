/*Elabore um programa em C que leia as idades de duas pessoas e as imprima na tela
em ordem crescente.*/
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int idade1;
	int idade2;
	
	printf("Qual a idade da primeira pessoa?\n");
	scanf("%i",&idade1);
	printf("Qual a idade da segunda pessoa?\n");
	scanf("%i",&idade2);
	
	if(idade1 > idade2)
	{
		printf("A primeira pessoa e mais velha e tem %i anos\n",idade1);
		printf("A segunda pessoa e mais nova e tem %i anos\n",idade2);
	}
	else
	{
		printf("A segunda pessoa e mais velha e tem %i anos\n",idade2);
		printf("A primeira pessoa e mais nova e tem %i anos\n",idade1);
	}
	return 0;
}
