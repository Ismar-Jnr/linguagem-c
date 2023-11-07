/* Revis�o sobre fun��o

Em linguagem C e tamb�m em muitas outras linguagens nos podemos separar uma pequena parte do 
nosso c�digo em uma ou mais fun��es diferentes da fun��o principal (main). 

Uma fun��o definida pelo programador (n�s) deve ter um nome, um tipo de retorno e pode conter par�metros. 

Exemplo de fun��o para mostrar o resultado da soma de 1 at� um limite solicitado pelo usu�rio.
*/

//Tipo de Retorno    nome da fun��o		  par�metros
	int                  somar            (int fim)
{
	int pos, res=0;
	
	for(pos=1;pos<=fim;pos++)
	{
		res = res + pos;
	}
	return res;
}

// Programa q usa a fun��o somar();
#include<stdio.h>

int somar(int fim); // Assinatura da Fun��o

int main(void)
{
	int soma;
	soma = somar(10);
	
	printf("Resultado: %i\n", soma);
		
	return 0;
}
