/*Crie um programa em C para apresentar o resultado da seguinte série numérica:
		S=98+96+94+92+...+4*/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i,s=0;
	
	printf("Inicio\n");
	
	for(i=98; i>=4; i=i-2)
	{
		s = s + i;
	}
	
	printf("%i", s);
	return 0;
}
