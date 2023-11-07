// Exercicio 1
// Escreva um programa em C que peça 3 numeros para o usuario e mostre a soma de 1
// ate cada um destes numeros digitados.

int somar (int fim)
{
	int pos, res=0;
	
	for(pos=1;pos<=fim;pos++)
	{
		res = res + pos;
	}
	return res;
}

#include<stdio.h>
int somar (int fim);

int main(void)
{
	//int soma;
	int numero,i;
	
	for(i=0;i<3;i++)
	{
	printf("Digite um numero\n");
	scanf("%i",&numero);
	
	//soma = somar(numero);
	printf("Resultado: %i\n\n\n",somar(numero));
	//printf("Resultado: %i\n\n\n",soma);
	}
	
	return 0;
	
}
