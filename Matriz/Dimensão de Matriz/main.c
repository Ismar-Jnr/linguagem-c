#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	int Dimensao;
    	Dimensao = 0;
    	
   while ((Dimensao<1) || (Dimensao>20))
   {
     printf(" Dimesao da matriz: ");
     scanf("%d",&Dimensao); 
   }

  int A[Dimensao][Dimensao];

   for ( i=0; i < Dimensao; i++)
   {
       for ( j=0; j < Dimensao; j++)
	   {
           printf(" A[%i][%i] = " ,i,j); 
           scanf("%d",&A[i][j]); 
       }
   }

   printf("\n Matriz A:\n\n");
   for ( i=0; i <Dimensao; i++)
   {
       for ( j=0; j <Dimensao; j++)
	   {
           printf(" %d\t",A[i][j]); 
       }
   printf("\n");
   } 
	
	return 0;
}
