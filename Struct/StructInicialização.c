// STRUCT  � um recurso para a linguagem C criar novos tipos de vari�veis.
// Elas podem ser de tipos diferentes.
// Podemos criar um novo tipo de vari�vel com um valor inteiro e outro valor float
// Para um n�mero da mesa e o valor da conta em bar por exemplo.

#include <stdio.h>

struct despesa{
	int mesa;
	float conta;
};

int main(void) {
	struct despesa m1,m2;
	
	m1.mesa = 1;
	m1.conta = 18.20;
	
	printf("A mesa %d gastou %.2f\n",m1.mesa, m1.conta);
	
	return 0;
}

