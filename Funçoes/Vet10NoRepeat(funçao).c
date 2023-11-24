//Escreva um programa em C para ler até 10 numeros diferetes. 
//Ao final do processamento mostre os numeros lidos. 
//Deve parar de ler quando receber um zero ou terminar os dez numeros diferentes.
#include<stdio.h>
void ler(int *num, int pos){
	printf("Digite o %i numero: ",pos);
	scanf("%i",num);
}

int main(void){
	
	int vet[10], pos, flag, seg;
	int qtd[9];
	
	ler(&vet[0],1);
	
	if(vet[0]==0){
		printf("Processo interrompido");
		return 0;
	}
	
	for(pos = 0; pos < 9; pos++){
		qtd[pos]=0;
	}
	
	for(pos=1; pos<10;pos++){
		
		do{
			flag=0; //sem repetição
			ler(&vet[pos],pos+1);
			
			
			
			for(seg = pos-1; seg >= 0; seg--){
				if(vet[pos] == vet[seg]){
					flag = 1;
					if(flag==1){
						qtd[seg]++;
					}
				}
			}
		}while(flag != 0);
		
		if(vet[pos] == 0){
				break;
		}
	}
	
	for(seg = 0; seg <pos; seg++){
		printf("Valor %i: %i\n", seg+1, vet[seg]);
		
		if(qtd[seg]>0){
			printf("Quantidade de erros na posicao %i: %i\n",seg+1,qtd[seg]);
		}
	}
	
	 
	return 0;
}
	