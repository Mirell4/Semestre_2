#include<stdio.h>
 /*  Faça um programa em C que leia dois conjuntos de números inteiros, tendo cada um 10 elementos. Ao final o
programa deve listar os elementos comuns aos conjuntos. */

int main(){
	
	int vet1[10] = {1,2,3,4,5,6,7,8,9,10};
	int vet2[10] = {4,6,7,9,20,30,40,50,60,70};
	int igual;
	int i, j;
	
	for(i=0; i<10; i++){
		
		for(j=0;j<10; j++){
			
			if(vet1[i] == vet2[j]){
			
			printf("Numeros iguais entre os vetores: %d\n", vet1[i]); //acessar pelo vetor, pois o i so conta a posição
			
			}
		}
		
	}
	
	
}

