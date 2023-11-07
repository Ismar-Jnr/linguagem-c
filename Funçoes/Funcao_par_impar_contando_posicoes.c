
//Ex 1 -  Escreva um programa que peça dois numeros para o usuario ate que sua soma seja par.
//        O teste do while() deve usar uma função.

//Ex 2 - Escreva as funçoes pedepar() e pedeimpar().

//Ex 3 - Altere o Ex 2 para mostrar ao usuario qual posição ele esta digitando.

#include<stdio.h>
int pedepar(int i){
	int par;
	
	do{
		
	printf("Digite a %i posicao do vetor com numero par\n",i+1);
	scanf("%i",&par);
	} while((par%2)!=0);
	
	return par;
}

int pedeimpar(int i){
	int impar;
	
	do{
		
	printf("Digite a %i posicao do vetor com numero impar\n", i+1);
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
			vet[i] = pedepar(i);
		}
		else{
			vet[i] = pedeimpar(i);
		}
	}
	
	for(i=0; i<10; i++)
	{
		printf("%i\n",vet[i]);
	}
}