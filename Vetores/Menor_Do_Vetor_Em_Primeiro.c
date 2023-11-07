// Ex.2 Ler um vetor de 10 inteiros e faça com que o menor valor fique na primeira posição.

#include<stdio.h>

int main(void)
{
	int pos,temp,vet[10];
	
	for(pos=0;pos<10;pos++)
	{
		printf("Digite o %i valor:",pos+1);
		scanf("%i",&vet[pos]);
	}
	
	for(pos=1; pos <10; pos++)
	{
		if(vet[pos]<vet[0])
		{
			temp = vet[pos];
			vet[pos] = vet[0];
			vet[0]= temp;
		}
	}
	for(pos=0; pos<10; pos++)
	{
		printf("%i", vet[pos]);
	}
	
	return 0 ;
}
