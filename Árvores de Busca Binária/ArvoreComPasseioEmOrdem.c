#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define TRUE 1
#define FALSE 0

//Cria campos do No
struct camposNo{
   int valor;
   struct camposNo *esq, *dir;
};

struct camposNo* criaNo( int vlr ); 
void mostraArvEmOrdem( struct camposNo *pai ); 

int main(void){
   int pos, num, qtdNumeros = 10;
   struct camposNo *arv, *pai, *filho;
   
   arv = NULL;  //Cria a arvore
   
   //Carrega a arvore
   for( pos = 0; pos < qtdNumeros; pos++){
      num = (qtdNumeros * ((float) rand() / RAND_MAX));      
      printf("Foi gerado: %d\n", num);
      
      pai = arv;
      filho = arv;
      while( (filho != NULL) && (num != filho->valor) ){
         pai = filho;
         if( num < pai->valor ){
            printf("Desce pela esquerda - num: %d e no: %d\n", num, pai->valor);
            filho = pai->esq;
         }else{
            printf("Desce pela direita - no: %d e num: %d\n", pai->valor, num);
            filho = pai->dir;
         }
      }
      //Aqui chegou no final da arvore ou valor esta duplicado
      if( arv == NULL ){
         printf("Cria a raiz\n");
         arv = criaNo( num );
         if( arv == NULL ){
            return FALSE;
         }
      }else if( (filho != NULL) && (num == filho->valor) ){
         printf( "O valor %d esta repetido.\n", num);
      }else{
         if( num < pai->valor ){
            printf("Cria filho a esquerda\n");
            pai->esq = criaNo( num );
            if( pai->esq == NULL ){
               return FALSE;
               scanf("%d", &num);
            }
         }else{
            printf("Cria filho a direita\n");
            pai->dir = criaNo( num );
            if( pai->dir == NULL ){
               return FALSE;
               scanf("%d", &num);
            }
         }
      }
   }
   //Mostra a arvore
   printf("Exibindo a arvore com passeio em ordem:\n");
   mostraArvEmOrdem( arv );

   scanf("%d", &num);
   return 0;   
}

struct camposNo* criaNo( int vlr ){
   //Declara um novo no
   struct camposNo *noAux;
   //Aloca memoria para o novo no
   noAux = (struct camposNo*) malloc(sizeof(struct camposNo));
   if( noAux == NULL ){
      //Nao conseguiu alocar memoria
      printf( "Faltou memoria para alocar o no!\n");
      return NULL;
   }
   noAux->valor = vlr; //Registra o valor recebido
   //Marca este No como sendo o unico da arvore
   noAux->esq = NULL;
   noAux->dir = NULL;
   //Se chegou ateh aqui eh porque foi tudo bem
   return noAux;
}

void mostraArvEmOrdem( struct camposNo *pai ){
   struct camposNo *aux;
   aux = pai;
   if( aux != NULL ){
      mostraArvEmOrdem( aux->esq );
      printf("%d\n", aux->valor);
      mostraArvEmOrdem( aux->dir );
   }
}

