//Escreva um programa em C para carregar um vetor de 10 inteiros. Use uma função para ler os numeros.
//Altere o programapara mostrar ao usuario qual doas 10 posiçoes do vetor ele esta carregando. (SÓ É POSSIVEL FAZER ISSO PASSANDO PARAMENTRO).
#include<stdio.h>
int ler(int parametro)
{	
	int valor;
	printf("Digite o numero da posicao %i do vetor:\n",parametro);
	scanf("%i", &valor);
	
	return valor;	
}


int ler(int parametro);
int main(void)
{
	int i, vet[10];
	
	for(i=0;i<10;i++)
	{
		vet[i]=ler(i+1);
	}
	for(i=0;i<10;i++)
	{
		printf("Valor do vetor: %i\n", vet[i]);
	}
	return 0;
}