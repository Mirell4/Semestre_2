#include<stdio.h>
/* 14. Fa�a um programa que armazene 50 n�meros inteiros em um vetor. O programa deve gerar e imprimir um
segundo vetor em que cada elemento � o quadrado do elemento do primeiro vetor. */

int main(){
	
	int vet[50];
	int vetquad[50];
	int i;
	
	for(i=0;i<50;i++){
		
		printf("Insira um numero inteiro: \n");
		scanf("%d", &vet[i]);
		
	}
	
	for(i=0;i<50;i++){
		
		vetquad[i] = vet[i] * vet[i];
		printf("Numero: %d | Seu quadrado: %d\n", vet[i], vetquad[i]);
	}
	
	
}
