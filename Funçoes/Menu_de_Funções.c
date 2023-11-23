// Escreva um programa em C com um menu de opções para: 
// 1- Ler 2 números e mostrar sua soma.
// 2- Ler o números do teclado até que o usuário digite um par
// 3- Ler 2 números ímpares e mostrar seu produto
// 9- Encerrar
#include<stdio.h>
#include<stdlib.h>
int soma(){
	int n1, n2;
	int soma;
	
	printf("Digite o primeiro numero: \n");
	scanf("%i", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%i", &n2);
	
	return n1+n2;
}
////////////////////////////////////////////////////////////////////////
void par(){
	
	int numero;
	do{
	printf("Digite um numero: \n");
	scanf("%i", &numero);
	}while (numero % 2 == 1);
	
}
////////////////////////////////////////////////////////////////////////
int produto(){
	
	int n1, n2;
	
	do{
		printf("Digite um numero impar: \n");
		scanf("%i", &n1);		
	}while (n1 % 2 != 1);
	
	
	do{
		printf("Digite outro numero impar: \n");
		scanf("%i", &n2);
	}while (n2 % 2 == 0);
	
	return n1*n2;
}


 int main(void){
 	
 	int escolha;
 	int contador = 0;
 	
 	do{
		printf("Escolha: 1 - Para somar numeros\n");
		printf("Escolha: 2 - Para ler numeros impares\n");
		printf("Escolha: 3 - Para 2 numeros impares e mostrar seu produto\n");
		scanf("%i", &escolha);
	
		if(escolha == 1){
			printf("Valor da soma: %i\n", soma());
		}
		
		else if(escolha == 2){
			par();
		}
	
		else if(escolha == 3){

			printf("Resultado da multiplicacao: %i\n", produto());
		}
		
		
		else if(escolha !=9){
			
			contador++;
			
			if(contador<3){
				printf("Opcao desconhecida!\n\n");
			}else if (contador<5){
				printf("Preste mais atencao!\n\n");
			}else if (contador<7){
				printf("Solicite ajuda\n\n");
			}				
			else{
				printf("Acredito que voce nao seja capaz de realizar esses objetivos\n\n");
			}
			
		}
		
	} while(escolha != 9);
	
		
	return 0;
 	
 }