	
		/*
		Arquitetura de Sistemas
		
		Para os enunciados a seguir defina o tipo mais apropriado
		de variáveis(variável simples, vetor, estrutura, vetor de estrutura, lista ligada, pilha(LIFO), Fila(FIFO))
		
		1 - Preciso ler uma quantidade indeterminada de valores até que o usuário digite zero.
		
		2 - Preciso somar as notas de uma prova até que o usuário digite -1.
		
		3 - Preciso apresentar as notas de uma prova que ficaram abaixo da média da prova.
		
		4 - Preciso ler o R.A, a idade, a nota da prova 1 e a nota da prova 2 de 40 alunos.
		
		5 - Preciso mostrar os dados dos alunos com nota da prova 2 acima da média considerando a questão anterior.
		
		6 - Considerando o enunciado anterior com o detalhe que não sabemos a quantidade de alunos.
		*/
		
		
	//4 - Preciso ler o R.A, a idade, a nota da prova 1 e a nota da prova 2 de 40 alunos.
		
	//5 - Preciso mostrar os dados dos alunos com nota da prova 2 acima da média considerando a questão anterior.
	
	//6 - Considerando o enunciado anterior com o detalhe que não sabemos a quantidade de alunos.		
#include<stdio.h>
#include<stdlib.h>
struct aluno{
	int idade, ra;
	float p1, p2;
	struct aluno *prox;
};
int main(void)
{
	int qtd=0;	
	float media, soma=0.0;
	struct aluno *lista = NULL, *aux;	
	
	do{ //até p2 < 0
		if(!(aux=malloc(sizeof(struct aluno)))){
			printf("Sem memoria");
			exit(1);
		}
		
		printf("Digite a nota da prova 2: ");
		scanf("%f",&(aux->p2));
		
		if(aux->p2 >= 0){
			printf("Digite a nota da prova 1: ");
			scanf("%f", &(aux->p1));
			printf("Digite o RA: ");
			scanf("%i",&(aux->ra));
			printf("Digite a idade: ");
			scanf("%i", &(aux->idade));
			
			aux->prox = lista;
			lista = aux;
			
			qtd++;
			soma=soma+aux->p2;
		}
	}while(aux->p2 >= 0);
		
		free(aux);
		
		media = soma/qtd;
		
		aux = lista;
		
		while(aux != NULL){
			
			if(aux->p2 > media){
				printf("Dados do aluno com prova 2 acima da media=  ");
				printf("RA: %i\n", aux->ra);
				printf("idade: %i\n", aux->idade);
				printf("P1: %.1f\n", aux->p1);
				printf("P2: %.1f\n\n", aux->p2);
			}
			
			aux = aux->prox;
		}
		aux = lista;
		
		while(aux != NULL){
			lista = aux->prox;
			free(aux);
			aux = aux->prox;
		}
		
	
	return 0;	
}

