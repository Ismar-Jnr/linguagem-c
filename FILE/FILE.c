// Ler e escrever em arquivo de tipo texto

// 	FILE --> para acessar um arquivo precisamos de um tipo especial de variável que é criado como o FILE.
// Com ele vamos definir o nome das variáveis para ler e gravar em arquivos.

// Exemplo: FILE arq;
// As principais operações com arquivo de texto são:

		/*
		fopen() --> usado para abrir um arquivo
		
		fclose() --> usado para fechar um arquivo
		
		fputs() --> usado para gravar um linha
		
		fgets() --> usado para ler uma linha
		*/

// fopen() precisa definir a forma que o arquivo será aberto
/*

		R --> abre o arquivo para leitura (Read)
		
		W --> abre o arquivo apenas para escrita (Write)

		A --> abre arquivo para adicionar no final (Add)
    	
    	
    	Para trabalhar com esses parametro (FILE) recomenda-se que o executavel e o arquivo.txt esteja na mesma pasta.
*/
#include<stdio.h>
#include<stdlib.h>
#define TAMANHO 1000

int main(void){
	
	FILE *arqE;
	
	char linha[TAMANHO];
	
	if((arqE = fopen("entrada.txt", "r")) == NULL){
		printf("Erro");
		exit(1);
	}
	
	while(!feof(arqE)){
		if(fgets(linha,TAMANHO,arqE)){
			printf("%s",linha);
		}
	}
	fclose(arqE);
	
	return 0;
}

