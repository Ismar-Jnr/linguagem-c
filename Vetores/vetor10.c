/*Escreva um programa em C para ler até 10 números diferentes. Ao final do processamento
mostre os números lidos. Deve parar de ler quando receber um zero ou terminar os dez números diferentes
*/


#include<stdio.h>
#include<stdlib.h>
int main(void){
	
	int vetor[10];
	int i=0,j, flag = 1;
	
	printf("Digite a posicao %i\n",i+1);
	scanf("%i",&vetor[0]);
	
	if(vetor[0] == 0){
		printf("Processo interrompido");
		return 0;
	}


	for(i=1;i<10;i++){
			do
			{
				flag = 0;				
				printf("Digite o valor da posicao %i\n", i+1);
				scanf("%i", &vetor[i]);
				
					if(vetor[i] == 0){
						printf("Processo interrompido");
						return 0;
					}
				
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
		
		for(i=0;i<10;i++)
		{
			printf("Posicao %i do vetor: %i\n", i+1, vetor[i]);
		}
	return 0;
}