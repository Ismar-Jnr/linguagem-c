/*Crie um programa em C que imprima “Está no intervalo apropriado” caso o usuário
tecle um número inteiro menor que 5 ou maior que 10, incluindo os extremos.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("Digite um numero\n");
	scanf("%i",&num);
	
	if(num < 5 || num >10)
	{
		printf("Esta no intervalo apropriado\n");
	}
	printf("Obrigado");
	return 0;
}
