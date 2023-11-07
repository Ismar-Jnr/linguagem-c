/*Crie um programa em C para apresentar o resultado da seguinte série numérica:
        S=2002+2001+2000+...+6+5   */
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i,s=0;
	
	printf("Inicio\n");
	
	for(i=2002; i>=5; i--)
	{
		s = s + i;
	}
	
	printf("%i", s);
	return 0;
}


