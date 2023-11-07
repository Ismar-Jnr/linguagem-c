// Exercicio 2.C
// Altere Ex.2B para que os menores valores fiquem sempre a esquerda = Ordenado em ordem crescente..

#include<stdio.h>
int main(void)
{
	int i,j,temp,vet[10];
	
	for(i=0;i<10;i++)
	{
		printf("Digite o %i valor:",i+1);
		scanf("%i",&vet[i]);
	}
	//ORDENAÇÃO POR SELEÇÃO
	for(j=0; j<10-1;j++)
	{
		for(i=j+1; i <10; i++)
		{
			if(vet[i]<vet[j])
			{
				temp = vet[i];
				vet[i] = vet[j];
				vet[j]= temp;
			}
		}
	}
	for(i=0; i<10; i++)
	{
		printf("%i", vet[i]);
	}
	
	return 0 ;
}
