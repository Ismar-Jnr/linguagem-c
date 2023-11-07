// Q8 - Elabore um programa para ler 10 numeros e mostre os numeros acima da media deste vetor.
#include<stdio.h>

int main(void)
{
	int i, num[10], soma=0,media;
	
	for(i=0;i<10;i++)
	{
		
		printf("Digite o numero %i\n", i+1);
		scanf("%i", &num[i]);
		
		soma = soma + num[i];		
	}
	media = soma / 10;
	printf("A Media e: %i\n", media);
	
	for(i=0;i<10;i++)
	{
		if(num[i]>media)
		{
			printf("\n Numeros maiores que a media: %i \n",num[i]);
		}
	}
	
	
	
}
