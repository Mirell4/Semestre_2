#include<stdio.h>
/* 17 Faça um programa que leia um conjunto de 30 valores inteiros, armazene-os em um vetor e os imprima ao
contrário da ordem de leitura.*/

int main(){
	
	int vet1[30];
	int i;
	
	for(i=0;i<30;i++){
		printf("Insira um numero:\n");
		scanf("%d", &vet1[i]);
	}
	
	for(i=29;i>=0;i--){
		printf("%d ", vet1[i]);
	}
}
