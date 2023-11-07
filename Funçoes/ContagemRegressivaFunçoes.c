// Escreva um programa com 2 funções auxiliares:
// Uma para pedir ao usuario um numero e outra para mostrar a contaem regressiva deste numero ate zero
#include<stdio.h>
int f1(n1)
{
	printf("Digite um numero:\n");
	scanf("%i", &n1);
	return n1;	
}
int f2(mostrar)
{
	int check;
	
	for(check=mostrar; check>=0; check--)
	{
		printf("%i\n",check);
	}
	
}

int main(void)
{
	int num;
		
	num = f1();
	f2(num);
	
	return 0;
}
