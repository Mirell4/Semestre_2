#include<stdio.h>
/*16. Crie um programa em C para ler um conjunto de 100 números reais e informe:
• quantos números lidos são iguais a 30
• quantos são maiores que as média
• quantos são iguais a média */

int main(){
	
	int numeros[3];
	int soma = 0;
	int media=0;
	int iguais30=0;
	int iguaismedia=0;
	int maiormedia=0;
	int i;
	
	for(i=0;i<3;i++){
		printf("Insira um numero:");
		scanf("%d", &numeros[i]);
		
		soma+=numeros[i];
		
		if(numeros[i] == 30){
			iguais30++;
		}
		
	}
	
	media = soma/3;
	
	for(i=0;i<3;i++){
		
		if(numeros[i]== media){
			iguaismedia++;
		} else if ( numeros[i] > media){
			maiormedia++;
		}
		
		
	}
	
	printf("%d numeros lidos sao iguais a 30 | %d numeros sao maiores que a media | %d sao iguais a media", iguais30, maiormedia, iguaismedia);
	
	
}

