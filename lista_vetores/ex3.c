#include<stdio.h>

/*Construa um programa em C que armazene 15 números em um vetor e imprima uma listagem numerada
contendo o número e uma das mensagens: par ou ímpar.*/

void processador(int vetor[]){
	
	int i;
	
	for(i=0; i<15; i++){
		printf("Insira um numero:");
		scanf("%d", &vetor[i]);
	}	
	
		for(i=0; i<15; i++){
			
			if(vetor[i] % 2 == 0){
				printf("%d e par\n", vetor[i]);
			}else {
				printf("%d e impar\n", vetor[i]);
			}
			
		}
	
}

int main(){
	
	int vetor[15];
	processador(vetor);
	return 0;
	
}
