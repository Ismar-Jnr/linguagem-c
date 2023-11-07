//Formule um programa para calcular quantos tijolos de 15cm x 30cm são necessários
//para criar uma parede de 2 metros x 4 metros.
#include<stdio.h>
int main(void)
{
	float atijolo=0.15;
	float ctijolo=0.30;
	int aparede=2;
	int cparede=4;
	float areatijolo;
	float areaparede;
	float qtdtijolo;
	
	/*
	printf("Digite a altura da parede: \n");
	scanf("%i", &aparede);
	printf("Digite o comprimento da parede: \n");
	scanf("%i", &cparede);
	*/
	
	
	areatijolo = atijolo*ctijolo;
	areaparede = aparede*cparede;
	
	qtdtijolo = areaparede/areatijolo;
	
	printf("Sao necessarios %.1f tijolos", qtdtijolo);
}
