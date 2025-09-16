#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo
que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números
repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.*/

int main(){
	
	srand(time(NULL));
	int cartela[5][5];
	int repetidos[100] = {0};
	int i,j;
	int numero;
	
	for(i=0;i<5;i++){
		
		for(j=0;j<5;j++){
			
			do{
				numero = rand() % 100; //crie um numero novo
			} while (repetidos[numero] == 1); // verifica se foi usado
			
			cartela[i][j] = numero;
			repetidos[numero] = 1; // marca que foi usado
			
		}
	}
	
	for(i=0;i<5;i++){
		
		for(j=0;j<5;j++){
			
			printf("%2d ", cartela[i][j]);
		}
		
		printf("\n");
		
	}
}
