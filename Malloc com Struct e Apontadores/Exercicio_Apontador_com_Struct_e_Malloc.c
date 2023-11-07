//Exercicio - Crie um programa que pe�a ao usuario o RA e a nota de um aluno.
	// Se a nota for maior que 6 entao ele passou. Sen�o ele ganhou mais uma 
	// oportunidade para aprender no proximo semestre. N�o deve ser usada nenhuma
	// vari�vel est�tica e deve ser usada uma struct
#include<stdio.h>
#include<stdlib.h>

struct tpAluno
{
	int ra;
	float n1;
};

int main(void)
{
	struct tpAluno * apt;
	
	if(!(apt = malloc(sizeof(struct tpAluno))))
	{
		printf("Faltou Memory!\n");
		exit(1);
	}
	
	printf("Digite o RA:");
	scanf("%i",&(apt->ra));
	printf("Digite a nota:");
	scanf("%f",&(apt->n1));
	
	if(apt->n1 >= 6)
	{
		printf("Aprovado!");
	}
	else
	{
		printf("Insuficiente!");
	}
	free(apt);
	return 0;
}
