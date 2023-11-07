/*.Crie um programa em C para ler 200 números do teclado. Ao final da leitura seu
programa deve informar quantos números não estavam no intervalo entre 20 e 30,
incluindo os extremos, ou seja, os números 20 e 30 estão dentro deste intervalo.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int intervalo, numero;
	int i;
	
	for(i=0; i<200; i++)
	{
		printf("Digite um numero\n");
		scanf("%i", &numero);
		
		if(numero < 20 || numero >30)
		{
			intervalo++;
		}
	}
	
	
	
return 0;
}
