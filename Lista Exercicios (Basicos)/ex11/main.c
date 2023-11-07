/*Escreva um programa em C que avalie se os três valores inteiros digitados pelo
usuário formam um triângulo equilátero (três lados iguais), isósceles (dois lados
iguais e um diferente) ou escaleno (três lados diferentes). Lembre-se que para três
valores formarem um triângulo nenhuma soma de dois lados pode ser menor ou igual
ao terceiro lado.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int valor1, valor2, valor3;
		
	printf("Digite o tamanho da primeira reta do triangulo\n");
	scanf("%i",&valor1);
	printf("Digite o tamanho da segunda reta do triangulo\n");
	scanf("%i",&valor2);
	printf("Digite o tamanho da terceira reta do triangulo\n");
	scanf("%i",&valor3);
	
	if ((valor1 + valor2 > valor3) && (valor1 + valor3 > valor2) && (valor2 + valor3 > valor1))
	{
		if(valor1 == valor2 && valor2 == valor3)
		{
			printf("O Triangulo e equilatero\n");
		}
		else
		if(valor1 == valor2 || valor2 == valor3 || valor1 == valor3)
		{
			printf("O Triangulo e isosceles\n");
		}
		else
		{
			printf("O Triangulo e escaleno\n");
		}
	}
	else
	{
		printf("Os valores nao formam um triangulo\n");
	}
	
	return 0;
}
