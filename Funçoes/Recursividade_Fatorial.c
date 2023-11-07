//Exercicio 3
// Apresente um programa com uma função recursiva para calcular o fatorial de um 
// numero passado como parametro para esta função.

int fat(int parm)
{
	if(parm<=1) // Condição de parada
	{
		return parm;
	}
	return (parm*fat(parm-1));
}
#include<stdio.h>

int main(void)
{
	int numero, resu;
	
	printf("Digite o numero\n");
	scanf("%i",&numero);
	
	resu = fat(numero);
	
	printf("Resultado: %i\n", resu);
	
	return 0;
}
