#include<stdio.h>
#include<stdlib.h>

struct no{
	int valor;
	struct no *proxend;
};

struct fila{
	int cod;
	struct no *pri, *ult;
};

void mostra(struct no *parametro){
	struct no * aux;
	aux = parametro;
	
	while(aux != NULL){
		printf("Valor: %i\n",aux->valor);
		aux = aux->proxend;
	}

}

void inserir(int num, struct no **pri, struct no **ult){
	struct no *novo;
	if(!(novo=(struct no*)malloc(sizeof(struct no)))){
		printf("Faltou memoria");
		exit(1);
	}
	/*if(!(novo=malloc(sizeof(struct no)))){
		printf("Faltou memoria!\n");
		exit(1);
	}*/
	
	novo->valor=num;
	novo->proxend=NULL; //insere no fim da fila
	
	if(*pri == NULL){
		*pri = novo;
		*ult = novo;
	}
	else{
		(*ult)->proxend=novo;
		*ult = novo;
	}
}

int remover(struct no **pri, struct no ** ult){
	struct no *aux;
	int valor;
	
	if(*pri==NULL){
		printf("A fila esta vazia\n");
		exit(1);
	}
	aux = *pri;
	valor = aux->valor;
	*pri = aux->proxend;
	free(aux);
	if(*pri ==NULL){
		*ult=NULL;
	}
	return valor;
}

int main(void)
{
	struct fila f1;
	f1.pri = NULL;
	f1.ult = NULL;
	
	int i, num;
	
	for(i=0; i<5; i++){
		inserir(i,&(f1.pri),&(f1.ult));
	}
	
	mostra(f1.pri);
	
	printf("Apagando a fila\n");
	
	while(f1.pri != NULL){
		num = remover(&(f1.pri), &(f1.ult));
		printf("Valor: %i\n", num);
	}
	printf("Fim!\n");
	
	return 0;
	 
}