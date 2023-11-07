/*		Apontador ou ponteiro
	Um apontador � um tipo especial de vari�vel porque armazena "um endere�o de mem�ria".
	Para declarar um apontador usamos um asterisco antes do nome da vari�vel. 

Exemplo: int *apt;

	cria um apontador para o tipo inteiro chamado apt.
	Para um apontador receber um endere�o de uma vari�vel usamos o "E" comercial = &.


Exemplo: | int num, *apt; neste caso o apontador
	 	 | apt = &num;		


	apt recebeu o endere�o de num.

	Para ler ou gravar um valor NO ENDERE�O guardado por um apontador usamos tamb�m o asterisco.

Exemplo: | int * apt, num = 7;
	 | apt = &num;
	 | printf("%i\n", *apt);

	
	Ent�o: | & = o endere�o de
	       | * = no endere�o
	       */
	       
	       
	       // EXEMPLOOOOOOOOO
	       
	       #include<stdio.h>
	       int main(void)
	       {
	       	int num = 3, *apt;
	       	apt = &num;
	       	printf("%i\n", *apt);
	       	return 0;
		   }
