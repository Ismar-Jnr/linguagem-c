// Exercicio 3 
	// APONTADOR
		// Escreva um programa em C que leia 2 valores usando variaveis comuns
		// e mostre os valores lidos com apontador.

#include<stdio.h>
int main(void)
{
	int var1, var2, *apt1, *apt2;
	
	printf("Digite o valor da primeira variavel\n");
	scanf("%i",&var1);
	
	printf("Digite o valor da segunda variavel\n");
	scanf("%i",&var2);
	
	apt1 = &var1;
	apt2 = &var2;
	
	printf("Variavel 1: %i\n", *apt1);
	printf("Variavel 2: %i\n", *apt2);
	
	return 0;
}
