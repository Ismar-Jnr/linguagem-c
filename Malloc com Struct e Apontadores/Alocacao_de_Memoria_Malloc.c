/*Criamos APONTADOR com *
	Exemplo: int num;
				*apt;
				
	Usamos apontadores com * e &
	
	& � usado para ler o endere�o de uma vari�vel
	* � usando para acessar o valor de mem�ria guardado em um apontador
	
	Exemplo: apt = &num;
					num = 5;
					printf("Valor: %i\n", *apt);
					
	Podemos reservar (ou colocar) mem�ria de maneira din�mica usando a fun��o MALLOC() (=MEMORY ALLOCATION).
	Ela pede o tamanho a ser alocado e devolve o endere�o de mem�ria quando consegue alocar ou devolver zero quando falha.
	
	Exemplo: apt = malloc(sizeof(int));
	
	Para saber o tamanho a ser alocado usamos sizeof()
	Para desalocar (ou liberar) a mem�ria usamos free(apt)
	como a aloca��o pode falhar n�s devemos sempre testar o resultado.
	
	Exemplo usando boas pr�ticas de programa��o:
		
		if(!(apt=malloc(sizeof(int))))
		{
			printf("Faltou memoria!\n");
			exit(1);
		}
		
	Notem que agora n�s precisamos importar mais uma biblioteca para poder usar as novas fun�oes.
	Usaremos tambem a STDLIB.H
	
	Exemplo:*/
		
	#include<stdio.h>
	#include<stdlib.h>
	
	int main(void)
	{
		int *apt;
		
		if(!(apt=malloc(sizeof(int))))
			{
			printf("Faltou memoria!\n");
			exit(1);
			}
			
			*apt = 7;
			printf("Valor: %i\n",*apt);
			free(apt);
			return 0;
	}
		
