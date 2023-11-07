// Escreva um programa em C que leia o RA, a nota 1 e a nota 2 de dois alunos
// usando estrutura composta para as variáveis. Leia os valores, calcule as 
// médias e mostre todos os dados do aluno com a média mais alta.

#include <stdio.h>

struct aluno {
	int ra;
	float p1, p2,media;
};

int main(void)
{
	struct aluno a1, a2;
	//Aluno 1
		printf("Digite o RA do aluno 1\n");
		scanf("%i", &a1.ra);
		
		printf("\nDigite a nota da Prova 1: \n");
		scanf("%f", &a1.p1);
		printf("%.2f\n",a1.p1);
		
		printf("\nDigite a nota da Prova 2: \n");
		scanf("%f", &a1.p2);
		printf("%.2f\n",a1.p2);
		
		 a1.media = (a1.p1 + a1.p2)/2.0;
		 
		printf("A media e: %.1f\n\n", a1.media);

//Aluno 2
		printf("Digite o RA do aluno 2\n");
		scanf("%i", &a2.ra);
		
		printf("\nDigite a nota da Prova 1: \n");
		scanf("%f", &a2.p1);
		printf("%.2f\n",a2.p1);
		
		printf("\nDigite a nota da Prova 2: \n");
		scanf("%f", &a2.p2);
		printf("%.2f\n",a2.p2);
		
		 a2.media = (a2.p1 + a2.p2)/2.0;
		 
		printf("A media e: %.1f\n", a2.media);	
		
		system("cls");
		
	printf("O RA do aluno 1 e: %i\n", a1.ra);
	printf("A media do aluno 1 e: %.2f\n\n", a1.media);
	
	printf("O RA do aluno 2 e: %i\n", a2.ra);
	printf("A media do aluno 2 e: %.2f\n\n", a2.media);
	
	
		 
	
	
}
