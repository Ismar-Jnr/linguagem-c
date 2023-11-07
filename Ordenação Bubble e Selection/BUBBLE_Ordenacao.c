// Aprendendo ordenar vetores utilizando ordenaçaõ BUBBLE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j=1, temp, vet[10];
	
	for(i=0;i<10;i++)
	{
		printf("Digite o %i valor:",i+1);
		scanf("%i",&vet[i]);
	}
	//INICIO DA ORDENACAO
	while(j==1)
	{	
		j=0;
		{
			for(i=1; i <10; i++)
			{
				if(vet[i]<vet[i-1])
				{
				////------------------------------------------------------------------------------------//
					j=1; // ATRIBUI VALOR A VARIAVEL SENTINELA PARA QUE REALIZE TODAS AS TROCAS			//
				//		 // SE NAO ATRIBUIR ESSE VALOR, O LOOP SE ENCERRARÁ NA PRIMEIRA VEZ				//	
				//		 // FAZENDO QUE SOMENTE O MAIOR NUMERO VÁ PARA A ULTIMA POSICAO					//
				//		 //DEIXANDO O RESTO DO VETOR DESORDENADO.
				//////---------------------------------------------------------------------------------	//
						// REALIZA AS TROCAS DAS VARIAVEIS (TRIANGULAÇÃO)
 					temp = vet[i];
					vet[i] = vet[i-1];
					vet[i-1]= temp;
				}
			}
		}
	}
	
	for(i=0; i<10; i++)
	{
		printf("%i\n", vet[i]);
	}
	
	return 0 ;
}
