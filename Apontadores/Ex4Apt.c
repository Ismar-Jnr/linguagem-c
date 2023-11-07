// Ex4 Apontadores
// Elabore um programa em C para ler dois numeros e use um apontador para mostrar o menor
#include<stdio.h>
int main(void)
{
	int n1, n2, *apt;
	
	printf("Digite o primeiro valor\n");
	scanf("%i", &n1);
	
	printf("Digite o segudno valor\n");
	scanf("%i", &n2);
	
	if(n1<n2)
	{
		apt= &n1;
	}
	else
	{
		apt= &n2;
	}
	
	printf("Menor: %i", *apt);
}
