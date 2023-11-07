//Exercico 2
// Apresente um programa com uma função comum para calcular o fatorial de um
// numero passado como parametro para esta função
#include<stdio.h>
int fat (int parm);

int main(void)
{
	int numero;
	
	printf("Digite o numero ao qual deseja fatorar\n");
	scanf("%i",&numero);
	
		
	printf("Resultado:%i\n", fat(numero));
	return 0;
}


int fat (int parm)
{
	int pos, res=1;		
	for(pos=parm;pos>1;pos--)
	{
		res = res * pos;
	}
	return res;
}
