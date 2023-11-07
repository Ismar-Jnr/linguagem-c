// Escreva um programa que peça dois numeros para o usuario ate que sua soma seja par.
// O teste do while() deve usar uma função.
#include<stdio.h>

int soma(){
		
		int t1, t2;
		printf("Digite o primeiro numero\n");
		scanf("%i",&t1);
		printf("Digite o segundo numero\n");
		scanf("%i",&t2);		
		return t1+t2;	
}

int main(void)
{
	
	while(soma() %2 != 0 ){
	
	   printf("Tente novamente\n");
	}
	
	printf("A soma e par ");
	
	return 0;
}