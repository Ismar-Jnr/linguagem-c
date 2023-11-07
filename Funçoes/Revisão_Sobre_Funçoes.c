/* Revisão sobre função

Em linguagem C e também em muitas outras linguagens nos podemos separar uma pequena parte do 
nosso código em uma ou mais funções diferentes da função principal (main). 

Uma função definida pelo programador (nós) deve ter um nome, um tipo de retorno e pode conter parâmetros. 

Exemplo de função para mostrar o resultado da soma de 1 até um limite solicitado pelo usuário.
*/

//Tipo de Retorno    nome da função		  parâmetros
	int                  somar            (int fim)
{
	int pos, res=0;
	
	for(pos=1;pos<=fim;pos++)
	{
		res = res + pos;
	}
	return res;
}

// Programa q usa a função somar();
#include<stdio.h>

int somar(int fim); // Assinatura da Função

int main(void)
{
	int soma;
	soma = somar(10);
	
	printf("Resultado: %i\n", soma);
		
	return 0;
}
