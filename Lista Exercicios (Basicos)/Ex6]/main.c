/*Elabore um programa em C que imprima “Está no intervalo apropriado” caso o
usuário tecle um número menor que 10.*/
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int num;
	
	printf("Digite um numero\n");
	scanf("%i", &num);
	
	if(num<10)
	{
		printf("Esta no intervalo apropriado\n");
	}
	printf("Obrigado");
	return 0;
}
