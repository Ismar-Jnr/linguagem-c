/* Exercicio 1 - Escreva um programa em C para ler o RA, a nota 1 e nota 2 de 5 alunos.
Calcule as medias usando media aritmetica simples e informe todos os dados do aluno 
com a maior media */
#include <stdio.h>
struct aluno {
	int ra;
	float n1,n2,media;
};

int main(void)
{
	int pos=0,maior=0;
	struct aluno vetalunos[5];
	
	for(pos=0;pos<5;pos++)
	{
		printf("Digite o RA do aluno %i\n",pos+1);
		scanf("%i", &vetalunos[pos].ra);		
		printf("Digite a %i nota 1\n",pos+1);
		scanf("%f", &vetalunos[pos].n1);
		printf("Digite a %i nota 2\n",pos+1);
		scanf("%f", &vetalunos[pos].n2);		
		vetalunos[pos].media = (vetalunos[pos].n1+vetalunos[pos].n2)/2.0;		
		printf("A media do aluno %i foi %.2f\n\n",pos+1, vetalunos[pos].media);		
		
	}
	
	for(pos=0;pos<5;pos++)
	{
		if(pos!=0)
		{
			if(vetalunos[pos].media>vetalunos[maior].media)
			{
				maior = pos;
			}
		}
	}
	printf("O aluno %d teve maior media e foi %.2f\n", vetalunos[maior].ra,vetalunos[maior].media);
	printf("RA:%i e n1: %.1f e n2: %.1f e media: %.1f\n",vetalunos[maior].ra,vetalunos[maior].n1,vetalunos[maior].n2,vetalunos[maior].media);
	
	return 0;
}
	
