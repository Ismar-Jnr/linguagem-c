#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[])
{
      int Dimensao;
      Dimensao = 0;
   while ((Dimensao<1) || (Dimensao>20)){
     printf(" Dimesao da matriz: ");
     scanf("%d",&Dimensao); 
   }

  int A[Dimensao][Dimensao];

   for (int i=0; i < Dimensao; i++){
       for (int j=0; j < Dimensao; j++){
           printf(" A[%d][%d] = ",i,j); 
           scanf("%d",&A[i][j]); 
       }
   }

   printf("\n Matriz A:\n\n");
   for (int i=0; i <Dimensao; i++){
       for (int j=0; j <Dimensao; j++){
           printf(" %d\t",A[i][j]); 
       }
   printf("\n");
   } 

   printf("\n Diagonal principal da matriz A:\n\n");
   for (int i=0; i <Dimensao; i++){
       for (int j=0; j <Dimensao; j++)
           if (i == j) printf(" %d\t",A[i][j]);                  
   } 
   printf("\n\n");
    
    
    
    
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
