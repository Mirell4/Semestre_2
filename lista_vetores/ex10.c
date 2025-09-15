#include<stdio.h>
/*Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w cujos componentes são os
fatoriais dos respectivos componentes de vet.*/

int main(){
	
	int vet[10] = { 1,2,3,4,5,6,7,8,9,10};
	int vetw[10];
	int fatorial=1;
	int i, j;
	
	for(i=0; i<10; i++){
		
		fatorial = 1; //reseta o fatorial a cada numero 
		
		for(j=1; j<=vet[i]; j++){
			  
			  fatorial *= j;	
		}
		
		vetw[i] = fatorial;
		
	}
	
		
		for(i=0;i<10;i++){
			printf("Fatorial de %d = %d\n", vet[i], vetw[i]);
		}
		
		
}
