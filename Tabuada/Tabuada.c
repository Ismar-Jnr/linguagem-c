#include <stdio.h>
#define LIN 10
#define COL 10
int main(){
	int x, y;
	int tabela[LIN] [COL];
	// x = coluna
	// y - linha
	//preenche a tabela
	for(y=0; y< LIN; y+=1)
       for(x=0; x<COL; x+=1)
	      tabela[y][x] = x*y;
	
	printf("\n			Tabela de Multiplicašao\n");	
	//imprime o numero das colunas
	printf("%6d",0);

	for(x=1; x<COL; x+=1)
	   printf("%3d", x);
	
	printf("\n");
	//imprime uma linha horizontal
	printf("	");
	for(x=0; x< 3*COL; x+=1)
	   printf("-");
	
	printf("\n");
	//imprime as linhas da tabela.
	for(y=0; y<LIN; y+=1){
	   printf("%2d|", y);			
	   for(x=0; x<COL; x+=1)		
	      printf("%3d", tabela[y][x]);
	   
	   printf("\n");
	}	
}

