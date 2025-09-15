#include<stdio.h>

/*Construa um programa que armazene o código, a quantidade, o valor de compra e o valor de venda de 3
produtos. A listagem pode ser de todos os produtos ou somente de um ao se digitar o código.*/

void processador(int vetor[]){
	
	int i, soma=0;
	
	for(i=0; i<3; i++){
	printf("%d\n", vetor[i]);
	
	}
	
	for(i=0; i<3; i++){
		
		if(vetor[i] %6 == 0){
			soma += 1;
		}
		
	}
	
	printf("%d numeros sao multiplos de seis", soma);
}

int main(){
	
	int vetor[] = { 60, 6, 24};
	processador(vetor);
	return 0;
}
