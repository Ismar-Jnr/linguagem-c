//Exercicio 1: Escreva um programa em C com uma função para ler um numero menor que 10
//Este numero deve ser exibido por outra função deferente da main.
#include<stdio.h>

int ler()
{
	int valor;
	printf("Digite um numero menor que 10:\n");
	scanf("%i", &valor);
	
	while (valor>=10)
	{
		printf("Digite um numero menor que 10:\n");
		scanf("%i", &valor);		
	}
	return valor;
}

void mostrar(int p1)
{
	printf("Foi Digitado:%i", p1);
}

int main(void)
{
	int num;
	num = ler();
	mostrar(num);
}
