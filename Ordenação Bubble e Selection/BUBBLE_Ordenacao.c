// Aprendendo ordenar vetores utilizando ordena�a� BUBBLE
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
				//		 // SE NAO ATRIBUIR ESSE VALOR, O LOOP SE ENCERRAR� NA PRIMEIRA VEZ				//	
				//		 // FAZENDO QUE SOMENTE O MAIOR NUMERO V� PARA A ULTIMA POSICAO					//
				//		 //DEIXANDO O RESTO DO VETOR DESORDENADO.
				//////---------------------------------------------------------------------------------	//
						// REALIZA AS TROCAS DAS VARIAVEIS (TRIANGULA��O)
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
