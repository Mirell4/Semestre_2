#include<stdio.h>
/*1. Construa um programa que leia dados para um vetor de 100 elementos inteiros. Imprimir o maior e o menor,
sem ordenar, o percentual de números pares e a média dos elementos do vetor. */

int main(){
	
	int vetor[100];
	int maior = 0;
	int menor = 100000;
	int pares = 0;
	float media = 0;
	int soma = 0;
	float percentual;
	int i;
	
	for(i=0; i<100;i++){
		
		printf("Insira um numero:\n");
		scanf("%d", &vetor[i]);
		
		soma += vetor[i];
		
		if(vetor[i] %2 == 0){
			pares ++;
		}
		
		if(vetor[i] > maior){
			
			maior=vetor[i];
			
		} if (vetor[i] < menor ){ // else n daria 
			
			menor=vetor[i];
		}
		
			
	}
	
	percentual = (pares * 100.0) / 100;
	media = soma/100.0;
	
	printf("Maior: %d | Menor: %d | Percentual pares: %.2f | Media: %.2f",maior, menor,percentual, media);
	
	
}

