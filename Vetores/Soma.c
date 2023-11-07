//Ex1. Elabore um programa em C que leia 2 numeros e mostre sua soma.
//Ex2. Altere o exercicio 1, para que os numeros somados, sejam diferentes.

#include<stdio.h>
int main(void)
{
	int n1, n2;
	
	printf("Digite o primeiro valor\n");
	scanf("%i",&n1);
	
	do
	{
	printf("Digite o segundo valor\n");
	scanf("%i",&n2);
	}
	while(n1 == n2);
	
	printf("A Soma dos valores e: %i", n1+n2);	
	return 0;
	
}
