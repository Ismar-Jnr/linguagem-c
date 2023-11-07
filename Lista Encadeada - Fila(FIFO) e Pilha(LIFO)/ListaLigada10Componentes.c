// Escreva um programa em C para criar uma lista ligada de 10 componentes onde o usuario
// digita um valor para cada um dos componentes. Ao final da execução mostre os numeros digitados.
#include<stdio.h>
#include<stdlib.h>

struct tipoNo{
	int num;
	struct tipoNo *prox;
};
int main(void)
{
	int i;
	
	struct tipoNo *prim=NULL, *novo;
	for(i=0;i<10;i++)
	{
		if(!(novo=malloc(sizeof(struct tipoNo))))
		{
			printf("Faltou Memoria");
			exit(1);
		}
		
		novo -> prox = prim;
		prim = novo;
		
		printf("Digite um numero");
		scanf("%i", &(novo->num));
	
	}
	
	while(prim != NULL)
	{
	 	printf("Valores: %i\n", prim->num);
	 	novo = prim;
	 	prim = prim->prox; //AVANÇA PRIM
	 	free(novo);
	}
	return 0;
}