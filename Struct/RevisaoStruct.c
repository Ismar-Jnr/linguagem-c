//Altere o rev1 para usar estrutura estatica com dois campos inteiros.
#include<stdio.h>
#include<stdlib.h>

struct estatica
{
	int valor1, valor2;
};
int main(void)
{
struct estatica num1;
	
		printf("Digite o primeiro valor\n");
		scanf("%i", &num1.valor1);
		
		printf("\nDigite o segundo valor: \n");
		scanf("%i", &num1.valor2);
		
		//printf("%i\n",num1.valor1);
		//printf("%i\n",num2.valor2);
		
		if((num1.valor1 % 2) == 0)
	{
		printf("Valor 1 e par: %i\n", num1.valor1);
	}
	
	if((num1.valor2 % 2) == 0)
	{
		printf("Valor 2 e par: %i\n", num1.valor2);
	}
		
		
			
	return 0;
}
