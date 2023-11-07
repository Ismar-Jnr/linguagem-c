// Ex1 - ESCREVA UM PROGRAMA EM C QUE MOSTRE O CONTEÚDO DE UM ARQUIVO TEXTO QUE O USUÁRIO VAI DIGITAR O NOME.

#include<stdio.h>
#include<stdlib.h>
#define TAM 1000

int main(void)
{
	
	FILE *arqE;
	
	char linha[TAM], nome[TAM];
	
	printf("Digite o nome do arquivo:");
	scanf("%s",&nome);
	
	if((arqE = fopen(nome, "r")) == NULL){
		printf("Erro");
		exit(1);
	}
	
	while(!feof(arqE)){
		if(fgets(linha,TAM,arqE)){
			printf("%s",linha);
		}
	}
	fclose(arqE);
	
	return 0;
}