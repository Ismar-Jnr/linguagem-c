//Crie um programa para ajudar um arquiteto que quer cobrir as paredes de uma casa
//com fotos de 50cm x 80cm. O programa deve pedir ao usuário a largura e o
//comprimento da parede. Ignore portas e janelas para simplificar as contas.

#include<stdio.h>
int main(void)
{
	int largura, comprimento;
	int areafoto;
	int areaparede;
	int fotos;
	
	areafoto= 50*80;
	printf("A area da foto e:%i \n", areafoto);
	
	printf("Qual a largura da parede em centimetros?\n");
	scanf("%i",&largura);
	printf("Qual o comprimento da parede em centimetros?\n");
	scanf("%i",&comprimento);
	
	areaparede = largura*comprimento;
	printf("A area da parede e: %i \n", areaparede);
	
	fotos = areaparede/areafoto;
	
	printf("O espaço comporta de %i fotos\n", fotos);
}
