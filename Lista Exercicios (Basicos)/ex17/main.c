/*Elabore um programa em C para ler o seu RA, um d�gito de cada vez, e em seguida
imprimir estes d�gitos em ordem inversa. Por exemplo, se o seu RA for 01234, ent�o o
usu�rio vai digitar 0 e apertar a tecla <ENTER>, depois ele vai digitar 1 e a tecla
<ENTER> e repetir este processo at� o d�gito 4 deste exemplo. Devem ser impressos
no final os d�gitos 43210.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ra = 0; 
	int digito;
	int i;
	int qtd;
	
	printf("Quantos numeros tem seu RA:\n");
	scanf("%i",&qtd);
    printf("Digite o seu RA (um digito de cada vez, pressione <ENTER> ap�s cada digito):\n");

    
    for (i = 0; i < qtd; i++) 
	{	
		scanf("%d", &digito);
		        
        if (digito >= 0 && digito <= 9)
		{
            ra = ra * 10 + digito;  //n�o entendi
        } 
		else 
		{
            printf("Digito invalido. Por favor, insira um digito entre 0 e 9.\n");
            i--;  
        }
    }
    
    printf("RA em ordem inversa: ");
    
    for (i = qtd-1; i >= 0; i--) 
	{
        digito = ra % 10;
        printf("%d", digito);
        ra = ra / 10;
    }
	return 0;
	system("PAUSE");
}
