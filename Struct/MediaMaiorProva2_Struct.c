//4 - Preciso ler o R.A, a idade, a nota da prova 1 e a nota da prova 2 de 40 alunos.
		
	//5 - Preciso mostrar os dados dos alunos com nota da prova 2 acima da média considerando a questão anterior.		
#include<stdio.h>
struct aluno{
	int idade, ra;
	float p1, p2;
};
int main(void)
{
	int i=0;	
	struct aluno vetoralunos[5];
	float mediap2, soma=0.0;
	
	for(i=0;i<5;i++)
	{
		printf("Digite a idade do aluno %i\n",i+1);
		scanf("%i", &vetoralunos[i].idade);
		
		printf("Digite o RA do aluno %i\n", i+1);
		scanf("%i", &vetoralunos[i].ra);
		
		printf("Digite a primeira nota do aluno %i\n",i+1);
		scanf("%f", &vetoralunos[i].p1);
		
		printf("Digite a segunda nota do aluno %i\n",i+1);
		scanf("%f", &vetoralunos[i].p2);
		
		system("cls");
		
		soma = soma + vetoralunos[i].p2;		
	}
	
	mediap2 = soma/5.0;
	
	for(i=0;i<5;i++)
	{
		if(vetoralunos[i].p2 > mediap2)
		{
		printf("O aluno %i teve a media da prova 2 acima da media\n",i+1);
		printf("RA: %i, Idade: %i, Nota 1: %.1f, Nota 2: %.1f\n", vetoralunos[i].ra, vetoralunos[i].idade,vetoralunos[i].p1,vetoralunos[i].p2);
		}
	}
	
	
	
	
	
	
}
