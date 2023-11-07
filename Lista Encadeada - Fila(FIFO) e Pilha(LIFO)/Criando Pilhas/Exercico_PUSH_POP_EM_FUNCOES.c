#include<stdio.h>
#include<stdlib.h>
//Declaração da Struct (Lista encadeada)
struct no{
	int conteudo;
	struct no *proxend;
};

void push(int pValor, struct no **pTopo){
	
	//Chamada da lista encadeada. o *novo reconhece todos os compornentes da lista
	// Ou seja, conteudo e proxend.
	struct no *novo;
	
	if(!(novo=malloc(sizeof(struct no)))){
		printf("!faltou memoria!\n");
		exit(1);
	}
	novo->conteudo=pValor;
	novo->proxend=*pTopo;
	*pTopo = novo;
}

int pop(struct no **parametro){
	//Chamada da lista encadeada. o *auxiliar reconhece todos os compornentes da lista
	// Ou seja, conteudo e proxend.
	struct no *auxiliar;
	int num;
	if(*parametro == NULL){
		printf("Pilha vazia!\n");
		exit(2);
	}
	
	auxiliar = *parametro;
	num = auxiliar->conteudo;
	*parametro = auxiliar->proxend;
	free(auxiliar);
	return num;
}

int main(void){
	int i, num;
	struct no *aptnovo, *pilha1=NULL;
	
	for(i=0; i<5; i++){
		printf("Digite o %i numero: ", i+1);
		scanf("%i", &num);
		push(num,&pilha1);
	}
	
	printf("Mostrando o conteudo da pilha: \n");
	
	aptnovo = pilha1;
	
	while(aptnovo != NULL){
		printf("Valor = %i\n", aptnovo->conteudo);
		aptnovo = aptnovo->proxend;
	}
	
	
	//APAGA A PILHA
	while(pilha1 != NULL){
		num = pop(&pilha1);
	}
	
	return 0;
}