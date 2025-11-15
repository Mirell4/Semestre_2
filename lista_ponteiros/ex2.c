#include<stdio.h>
/*2. Crie um programa que leia números reais em um vetor de tamanho 10. 
Imprima o endereço de cada posição desse vetor.*/
int main(){
	
	int vet[10];
	int i;
	
	for (i=0;i<10;i++){
		printf("Insira um numero \n");
		scanf("%d", &vet[i]);
	}
	for (i=0;i<10;i++){
		printf("o endereco de %i eh %d \n", i, &vet[i]);

	}
	
}

