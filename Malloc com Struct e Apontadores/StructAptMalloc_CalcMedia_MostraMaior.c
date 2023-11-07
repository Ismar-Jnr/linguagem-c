// Exercicio 4
// Escreva um programa em C que use uma estrutura para ler o RA, a nota1 e a nota 2 de 2 alunos.
// Calcule a média de cada um e aramzene no campo "media" da estrutura.
// Apresente todos os dados do aluno com a maior media.
// Não deve usar nenhuma variável estática.
// Use apenas alocações dinâmincas.
#include<stdio.h>
#include<stdlib.h>

struct Aluno
{
	int ra;
	float n1, n2, media;
};

int main(void)
{
struct Aluno *aptaluno1;
struct Aluno *aptaluno2;

	if(!(aptaluno1=malloc(sizeof(struct Aluno))))
	{
		printf("Faltou Memory!\n");
		exit(1);
	}
	if(!(aptaluno2=malloc(sizeof(struct Aluno))))
	{
		printf("Faltou Memory!\n");
		exit(1);
	}
//------------------ALUNO 1---------------------------------------//	
	printf("Digite o RA do Aluno 1:\n");
	scanf("%i",&(aptaluno1->ra));
		
	printf("Digite o Nota 1 do Aluno 1:\n");
	scanf("%f",&(aptaluno1->n1));
	
	printf("Digite o Nota 2 do Aluno 1:\n");
	scanf("%f",&(aptaluno1->n2));
	// MEDIA
	aptaluno1->media=(aptaluno1->n1+aptaluno1->n2)/2.0;
//-------------------ALUNO 2--------------------------------------//	
	printf("Digite o RA do Aluno 2:\n");
	scanf("%i",&(aptaluno2->ra));
		
	printf("Digite o Nota 1 do Aluno 2:\n");
	scanf("%f",&(aptaluno2->n1));
	
	printf("Digite o Nota 2 do Aluno 2:\n");
	scanf("%f",&(aptaluno2->n2));
	//MEDIA
	aptaluno2->media=(aptaluno2->n1+aptaluno2->n2)/2.0;
	
	
//---------------------------------------------------------//	

	if((aptaluno1->media) > (aptaluno2->media))
	{
		printf("A Maior media e  do ALuno com o RA %i\n",aptaluno1->ra);
		printf("A Nota 1 foi %.1f\n",aptaluno1->n1);
		printf("A Nota 2 foi %.1f\n",aptaluno1->n2);
		printf("A Media foi %.1f\n",aptaluno1->media);
	}
	else
	{
		printf("A Maior media e  do ALuno com o RA %i\n",aptaluno2->ra);
		printf("A Nota 1 foi %.1f\n",aptaluno2->n1);
		printf("A Nota 2 foi %.1f\n",aptaluno2->n2);
		printf("A Media foi %.1f\n",aptaluno2->media);
	}

	free(aptaluno1);
	free(aptaluno2);
	return 0;
	
}
