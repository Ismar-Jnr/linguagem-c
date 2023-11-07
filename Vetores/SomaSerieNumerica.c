// Escreva um programa em C para mostrar o resultado da serie numerica a seguir:
// s= (3*5) + (5*7) * (7*9) .... (51*53)
#include<stdio.h>
int main(void)
{
	int s, i;
	
	s = 0;
	
	for (i=3;i<=51;i=i+2)
	{
		s = s +  (i * (i+2));
	}
	printf("Soma: %i", s);
}
