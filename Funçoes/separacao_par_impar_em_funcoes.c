
//Ex 1 -  Escreva um programa que peça dois numeros para o usuario ate que sua soma seja par.
//        O teste do while() deve usar uma função.

//Ex 2 - Escreva as funçoes pedepar() e pedeimpar().

#include<stdio.h>
int pedepar(){
	int par;
	do{
		
	printf("Digite um numero par\n");
	scanf("%i",&par);
	
	} while((par%2)!=0);
	
	return par;
}

int pedeimpar(){
	int impar;
	
	do{
		
	printf("Digite um numero impar\n");
	scanf("%i", &impar);
	
	}while((impar%2)==0);
	
	return impar;
}

int main(void)
{
	int i, vet[10];
	
	for(i=0; i<10; i++)
	{
		if((i%2)==0){
			vet[i] = pedepar();
		}
		else{
			vet[i] = pedeimpar();
		}
	}
	
	for(i=0; i<10; i++)
	{
		printf("%i\n",vet[i]);
	}
}