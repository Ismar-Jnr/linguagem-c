/*Uma fun��o em C � uma sub-rotina ou sub-programa
A maioria das linguagens permite a cria��o de fun��es
Uma fun��o pode conter um tipo de retorno. Pode ser int, float ou algum outro tipo da linguagem
Se voce nao informar o tipo da fun��o entao ela sera do tipo int porque este � o valor default(Padr�o).
Uma fun��o tambem pode conter par�metros. Cada parametro deve ter um nome e um tipo. Todos sao separados por virgulas
Exemplo:
*/

#include<stdio.h>
// Cria-se Fun��o int ou float quando ela retorna valor
int ler() // Assinatura ou prot�tipo
{
	int valor;
	printf("Digite um numero:");
	scanf("%i", &valor);
	return valor;
}
//Cria-se fun��o VOID quando ela nao retorna valor
void mostrar(int parm)
{
	printf("Foi digitado: %i", parm);
}

int main(void)
{
	int num;
	num = ler();
	mostrar(num);
	return 0;
}
