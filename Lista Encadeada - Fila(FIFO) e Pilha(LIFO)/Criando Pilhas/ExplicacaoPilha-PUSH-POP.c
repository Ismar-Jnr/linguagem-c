PILHA é uma abstração muito poderosa estudada pelas estruturas de dados.
Na prática ela é uma lista ligada/encadeada com uma forte política de acesso 
chamada de LIFO = "Last In - First Out" (último que entra é o primeiro que sai).
Ela é muito conhecida por ser usada nos algoritmos básicos dos sistemas operacionais
para contrlo de chamadas e de retornos de funções ou procedimentos.
As principais operações das pilhas são:
										 PUSH() = para empilhar um elemento no topo
										 POP() = para desempilhar o elemento que está no topo da pilha.
Para identificar uma pilha normalmente usamos um apontador criado com a mesma estrutura(struct) que usamos
para criar os elementos da pilha.

EXEMPLO:
	
	#include<stdio.h>
	#include<stdlib.h>
	
	struct no{
		int valor;
		struct no *proxend;
	}
	
	int main(void){
		int i;
		struct no *aptnovo, *pilha1;
	}