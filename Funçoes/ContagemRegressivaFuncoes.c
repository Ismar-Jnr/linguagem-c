// Exercicio 4
// Escreva um programa em C que contenha uma fun��o recursiva para monstrar a contagem
// regressiva at� 0 onde o usuario digita o numero inicial.
#include<stdio.h>
int main(void)
{
	int numero, resu;
	
	printf("Digite o numero\n");
	scanf("%i", &numero);
	
	resu = regredir(numero);
	
	return 0;
}

int regredir ( int parm)
{
	if(parm == 0)
	{
		printf("%i\n",parm);
		return parm;
		
	}
	printf("%i\n",parm);
	return (parm-regredir(parm-1));
	
}
