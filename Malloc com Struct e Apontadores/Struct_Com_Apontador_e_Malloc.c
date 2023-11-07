Para usar apontador com STRUCT nós usamos uma flecha (->) para indicar qual campo da estrutura queremos acessar.

	Exemplo:
		struct tpAluno
		{
			int ra;
			float n1;
		};
		
		#include<stdio.h>
		#include<stdlib.h>
		int main(void)
		{
		struct tpAluno *apt;
		
		if(!(apt=malloc(sizeof(struct tpAluno))))
		{
			printf("Faltou memory!\n");
			exit(1);
		}
		
		apt->ra = 97283270;
		apt->n1 = 9.5;
		...
		}
