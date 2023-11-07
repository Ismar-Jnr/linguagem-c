/*Crie um programa em C que imprima “Está no intervalo apropriado” caso o usuário
tecle um número inteiro entre 1 e 7, incluindo os extremos.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("Digite um numero\n");
	scanf("%i",&num);
	
	if(num >=1 && num <=7)
	{
		printf("Esta no intervalo apropriado\n");
	}
	
	printf("Obrigado");
	return 0;
}
