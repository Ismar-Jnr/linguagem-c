#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 1000

int main(void)
{
	FILE *arqSaida;
	
	char linha[TAM], nome[TAM];
	
	printf("Digite o nome do arquivo:");
	scanf(" %[^\n]",&nome);
	
	if((arqSaida = fopen(nome, "a")) == NULL){
		printf("Erro!\n");
		exit(2);
	}
	
	memset(linha, '\0', TAM); // Limpa a memória
	
	printf("Digite algo:");
	scanf(" %[^\n]", &linha);
	
	linha[strlen(linha)] = '\n'; //Adicona "\n" ao final de cada ciclo
	
	fputs(linha, arqSaida);
	
	fclose(arqSaida);
	
	return 0;
	
	
}