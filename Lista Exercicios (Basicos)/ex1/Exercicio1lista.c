//Apresente um programa em C que leia os lados de um retângulo e apresente a sua area.
#include<stdio.h>

int main(void)
{
		float base, altura, area;
		
		printf("Qual a altura do retangulo?\n");
		scanf("%f", &altura);
		printf("Qual a base do retangulo?\n");
		scanf("%f", &base);
		
		area = base*altura;
		
		printf("A area do retangulo e: %.2f",area);
		
		return 0;
		
}

