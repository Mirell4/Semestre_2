#include<stdio.h>

/*Fa�a um programa em C que armazene 15 n�meros inteiros em um vetor e depois permita que o usu�rio digite
um n�mero inteiro para ser buscado no vetor, se for encontrado o programa deve imprimir a posi��o desse
n�mero no vetor, caso contr�rio, deve imprimir a mensagem: "Nao encontrado!".*/

int main(){
	
	int vetor[15], num, i;
	
	for(i=0; i<3; i++){
		printf("Insira um numero:");
		scanf("%d", &vetor[i]);
	}
	
	printf("Insira um numero p buscar no vetor:");
	scanf("%d", &num);
	
	for(i=0; i<3; i++){
		if (vetor[i] == num){
			printf("Sua posicao no vetor e: %d", i);
			return 0; //encerra quando achar
		}
	}
	
	printf("Numero nao encontrado/nao existe");
	
}
