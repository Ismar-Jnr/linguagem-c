/*Imagine que sua calculadora está com a tecla de multiplicação quebrada. Crie um
programa em C para calcular o produto de dois números (X * Y) usando somente o
comando de adição. Por exemplo, para multiplicar 4 * 5 sem o comando de
multiplicação você deve somar o 5 transformado em 4 componentes, o que equivale a
fazer 5 + 5 + 5 + 5.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int num1, num2, i;
	int check=0;
	
	
	printf("Digite o primeiro numero\n");
	scanf("%i", &num1);
	printf("Digite o numero pelo qual deseja multimplicar\n");
	scanf("%i", &num2);
	
	
	for(i=0; i<num2; i++)
	{
		check =check + num1;
	}
	
	printf("O resultado e: %i", check);	
	
	
	return 0;
}
