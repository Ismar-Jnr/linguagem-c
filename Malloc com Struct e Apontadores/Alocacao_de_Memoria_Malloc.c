/*Criamos APONTADOR com *
	Exemplo: int num;
				*apt;
				
	Usamos apontadores com * e &
	
	& é usado para ler o endereço de uma variável
	* é usando para acessar o valor de memória guardado em um apontador
	
	Exemplo: apt = &num;
					num = 5;
					printf("Valor: %i\n", *apt);
					
	Podemos reservar (ou colocar) memória de maneira dinâmica usando a função MALLOC() (=MEMORY ALLOCATION).
	Ela pede o tamanho a ser alocado e devolve o endereço de memória quando consegue alocar ou devolver zero quando falha.
	
	Exemplo: apt = malloc(sizeof(int));
	
	Para saber o tamanho a ser alocado usamos sizeof()
	Para desalocar (ou liberar) a memória usamos free(apt)
	como a alocação pode falhar nós devemos sempre testar o resultado.
	
	Exemplo usando boas práticas de programação:
		
		if(!(apt=malloc(sizeof(int))))
		{
			printf("Faltou memoria!\n");
			exit(1);
		}
		
	Notem que agora nós precisamos importar mais uma biblioteca para poder usar as novas funçoes.
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
		
