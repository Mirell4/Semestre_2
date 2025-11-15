#include<stdio.h>
/* 3. Crie um programa que contenha um vetor de inteiros com tamanho 5. 
Utilizando apenas ponteiros, leia valores e armazene neste 
vetor e após isso, imprima o dobro de cada valor lido.*/

int main(){
	
	int vet[5] = {0};
	int *ponteiro = vet;
	int i;
	
	for(i=0;i<5;i++){
		
		printf("Insira um num ");
		scanf("%d", ponteiro+i);
		
	}
	for(i=0;i<5;i++){
		
		printf("%d ", (*(ponteiro+i))*2);

		
	}
	
}


