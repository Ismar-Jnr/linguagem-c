/*As funções definidas pelo usúario são tão poderosas que podem até chamar elas mesmas.
Chamamos isto de "RECURSIVIDADE". */

// Exemplo usando a função de soma:

int somar(int fim)
{
	if(fim<=1) // Condição de parada
	{
		return fim;
	}
	return (fim+soma(fim-1));
}

// É vital para um código recursivo que ele atenda 2 requisitos:
// 1º - Condição de parada
// 2º - Reduzir a dimensão do problema buscando uma situação desejada,
//		também chamada de "caso base".
