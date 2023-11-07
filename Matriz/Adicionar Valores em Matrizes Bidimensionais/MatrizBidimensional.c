#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int linha, coluna;
	int i, j;
	int matriz[100][100];
	
	printf("Linhas da matriz\n");
	scanf("%i",&linha);
	
	printf("Colunas da matriz\n");
	scanf("%i",&coluna);
	
	printf("Digite os elementos da matriz\n");
	
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{		
			scanf("%i",&matriz[i][j]);
			matriz[i][j] = 5 * matriz[i][j];
			
		}
	}
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{		
			printf("Valores da matriz %i\n",matriz[i][j]);
			
		}
	}
	
	
	return 0;
}
