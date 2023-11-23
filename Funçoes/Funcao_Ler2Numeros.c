//Escreva um programa em C que tenha uma função para ler dois números do teclado.
//Mostre na função principal os dois números lidos.

#include<stdio.h>
#include<stdlib.h>


int ler (int *num1,int *num2){
//Para receber  um parâmetro por referência, é preciso colocar * antes da declaração dos parâmetros da função 		

	printf("Digite o numero 1\n");
	scanf("%i", num1);
	printf("Digite o numero 2\n");
	scanf("%i", num2);
}

int main(void){

	int  n1, n2;
	
	
	ler(&n1,&n2);//Para passar porâmentros por referência é preciso colocar "&" na respectiva variavel chamada.

	
	printf("Os numeros digitados sao: %i, %i ",n1,n2);
	
	return 0;
}