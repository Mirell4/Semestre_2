#include<stdio.h>
/* 1. Implemente um programa em C que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/

int main(){
	
	typedef struct pessoa{
		
		char nome[50];
		int idade;
		char endereco [200];
		
	}pessoa;
	
	pessoa pessoa1;
	
	printf("Insira seu nome: ");
	fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin); //associa a variavel, usando o tamanho dela.
	
	printf("Insira sua idade: ");
	scanf("%d", &pessoa1.idade);
	
	getchar(); // limpa o \n que o scanf deixa no buffer
	 
	printf("Insira seu endereco: ");
	fgets(pessoa1.endereco, sizeof (pessoa1.endereco), stdin);
	
	printf("%s", pessoa1.nome);
	printf("%d\n", pessoa1.idade);
	printf("%s", pessoa1.endereco);
	

	
}
