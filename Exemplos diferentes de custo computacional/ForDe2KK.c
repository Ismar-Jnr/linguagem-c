//For linear bem grande
#include<stdio.h>
int main(void)
{
	int i, vet[5000];
	
	for(i=0; i<2000000;i++)
	{
		vet[1] = 53;
		if((i % 100000)==0)
		{
			printf(".");
		}
	}
	return 0;
}
