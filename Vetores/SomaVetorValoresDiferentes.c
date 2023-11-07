// Escreva um programa em C que carregue um vetor de 5 inteiros todos diferentes
#include<stdio.h>
int main(void)
{
	int vetor[5];
	int i,j, flag;
	
	printf("Digite o valor da posicao %i\n", i+1);
	scanf("%i", &vetor[i]);
		
		for(i=1;i<5;i++)
		{
			do
			{
				flag = 0;				
				printf("Digite o valor da posicao %i\n", i+1);
				scanf("%i", &vetor[i]);
				
					for(j=i-1; j>=0; j--)
					{
						if(vetor[i] == vetor[j])					
						{
							flag = 1;
						}
					}
			}
			while(flag == 1);	
		}
		
		for(i=0;i<5;i++)
		{
			printf("Posicao %i do vetor: %i\n", i+1, vetor[i]);
		}
}
