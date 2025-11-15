#include<stdio.h>
/*4. Elabore um programa que leia um valor do tipo inteiro e, por meio de função, atualize todas as posições de
um vetor com o número inteiro lido, depois imprima os valores. Utilize ponteiros para as operações.*/

void atualizar(int *vet, int valor){
	
	int i;
	for(i=0;i<5;i++){
		
		*(vet+i) = valor;
	}
	
}

int main(){
	int i;
	int valor, vet[5] = {0};
	
	printf("Insira um numero: ");
	scanf("%d", &valor);
	
	atualizar(vet, valor);
	
	for(i=0;i<5;i++){
		printf("%d ", vet[i]);
	}
	
}
