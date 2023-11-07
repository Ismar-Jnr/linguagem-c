/* Escreva um programa que leia uma matriz quadrada de ordem 2 do teclado e imprima
o resultado de sua multiplicação por 5.
Obs.: Lembrem-se que uma matriz pode ser representada como sendo um vetor de
duas dimensões. Exemplo, float mat_A[2][2]; vai criar uma matriz de 2 linhas por 2
colunas.*/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int matriz[2][2];
	int i,j;
	
	//Entrada de Valores na matriz
	printf("Digite os elementos da matriz\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{		
			scanf("%i",&matriz[i][j]);
		}
	}
	
	
	
	return 0;
}
