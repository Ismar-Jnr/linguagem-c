// Escreva um programa que leia 10 valores inteiros e depois peça para o usuario digitar um numero qualquer.
//Informe se este novo numero existe no vetor.
#include<stdio.h>

int main(void)
{
	int vetor[10], i, usuario, flag=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite o numero na posicao %i: \n", i+1);
		scanf("%i", &vetor[i]);
	}
	
	printf("Qual o valor do usuario: \n");
	scanf("%i",&usuario);
	
	for(i=0;i<10;i++)
	{
	 	if(usuario == vetor[i])
	 	{
	 		printf("O numero do usuario e igual ao %i numero do vetor", i+1);
	 		flag =1;
	 		break;
		}
		
		
	 }
		if(flag==0)
		{
			printf("\nO numero nao esta no vetor\n");
		}
	 return 0;
}
