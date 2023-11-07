#include<stdio.h>

int soma(int p1, int p2){
	printf("Digite o primeiro");
	scanf("%i",&p1);
	printf("Digite o segundo");
	scanf("%i",&p2);
	return p1+p2;
}

int main(void)
{
	int pri, seg;
	
	printf("Soma=%i\n",soma(pri,seg));
	printf("Soma=%i\n",soma(pri,seg));
	
	return 0;
	
}