/*Elabore um programa em C para ler o seu RA, um dígito de cada vez, e em seguida
imprimir estes dígitos em ordem inversa. Por exemplo, se o seu RA for 01234, então o
usuário vai digitar 0 e apertar a tecla <ENTER>, depois ele vai digitar 1 e a tecla
<ENTER> e repetir este processo até o dígito 4 deste exemplo. Devem ser impressos
no final os dígitos 43210.
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
    printf("Digite o seu RA (um digito de cada vez, pressione <ENTER> após cada digito):\n");

    
    for (i = 0; i < qtd; i++) 
	{	
		scanf("%d", &digito);
		        
        if (digito >= 0 && digito <= 9)
		{
            ra = ra * 10 + digito;  //não entendi
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
