//For quadrático pequeno
#include<stdio.h>
int main(void)
{
	int i, vet[5000],j;
	
	for(j=0;j<1000;j++)	
	{
		for(i=0; i<2000000;i++)
		{
			vet[1] = 53;
			if((i % 100000)==0)
			{
				printf(".");
			}
		}
	}
	return 0;
}
