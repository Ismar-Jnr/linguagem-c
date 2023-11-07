/*O dono um grande terreno quer lotear seu imovel. Para isto ele quer avaliar o melhor tamanho de cada lote. 
Sabendo que todos os lotes devem ter 20 metros de profundidade.
As dimensoes do terreno sao 800 metros de frente por 20 metros de
profundidade. Elabore um programa que leia a quantidade de lotes desejada e mostre
o tamanho da frente de cada lote.*/
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{	
	int profundidade = 20;
	int frente = 800;
	int qtd;
	float divisao;
	
	printf("Em quantos lotes deseja dividir o terreno?\n");
	scanf("%i",&qtd);
	
	divisao = frente/qtd;
	
	printf("O tamanho da frente de cada terreno sera %.2f metros", divisao);
	
	return 0;
}
