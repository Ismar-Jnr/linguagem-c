/*As fun��es definidas pelo us�ario s�o t�o poderosas que podem at� chamar elas mesmas.
Chamamos isto de "RECURSIVIDADE". */

// Exemplo usando a fun��o de soma:

int somar(int fim)
{
	if(fim<=1) // Condi��o de parada
	{
		return fim;
	}
	return (fim+soma(fim-1));
}

// � vital para um c�digo recursivo que ele atenda 2 requisitos:
// 1� - Condi��o de parada
// 2� - Reduzir a dimens�o do problema buscando uma situa��o desejada,
//		tamb�m chamada de "caso base".
