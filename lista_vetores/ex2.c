#include <stdio.h>
/*Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada*/

int main(){
	char letras[3];
	int i;
	
	
	for(i=0; i <3; i++){
		printf("Insira uma letra:\n");
		scanf(" %c", &letras[i]);		
	}
	
	for(i=0; i<3; i++){
		printf("%d - %c\n", i, letras[i]);
	}
}
	

