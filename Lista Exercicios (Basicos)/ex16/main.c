/*Crie um programa em C para apresentar o resultado da seguinte série numérica:
S= 100 99 98 97 ...... 5
	__ __ __ __        _
	99+98+97+96 ...... 4		*/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{	
	float s = 0;
	int i, div;
	
	for(i=100; i>=5; i--)
	{
		div = i-1;
		s = s + i / div;
	}
	 printf("%f", s);
	
	return 0;
}
