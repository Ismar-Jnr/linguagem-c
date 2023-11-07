/*Uma função em C é uma sub-rotina ou sub-programa
A maioria das linguagens permite a criação de funções
Uma função pode conter um tipo de retorno. Pode ser int, float ou algum outro tipo da linguagem
Se voce nao informar o tipo da função entao ela sera do tipo int porque este é o valor default(Padrão).
Uma função tambem pode conter parâmetros. Cada parametro deve ter um nome e um tipo. Todos sao separados por virgulas
Exemplo:
*/

#include<stdio.h>
// Cria-se Função int ou float quando ela retorna valor
int ler() // Assinatura ou protótipo
{
	int valor;
	printf("Digite um numero:");
	scanf("%i", &valor);
	return valor;
}
//Cria-se função VOID quando ela nao retorna valor
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
