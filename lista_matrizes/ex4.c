#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Elabore um programa que preencha uma matriz 100x100 com dados aleatório de números reais entre 0 e 1,
e informe os valores máximo, mínimo sorteado e suas respectivas posições. Informe também o valor médio
atribuído na matriz.*/

int main(){
	
	srand(time(NULL));
	float matriz[100][100];
	float maior=0.0;
	float menor=10000.0;
	float soma = 0.0;
	float media=0.0;
	int linmaior;
	int colmaior;
	int linmenor;
	int colmenor;
	int i,j;
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			matriz[i][j] = (float)rand() / RAND_MAX;
		}
	}
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			
			soma += matriz[i][j]; 
			
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
				linmaior = i;
				colmaior = j;
			}
			
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
				linmenor= i;
				colmenor = j;
			}
		}
	}
	
	media = soma / (100*100);
	
	printf("Valor maximo: %.3f | posicao: linha %d, coluna %d\n", maior, linmaior+1, colmaior+1);
	printf("Valor minimo: %.3f | posicao: linha %d, coluna %d\n", menor, linmenor+1, colmenor+1);
	printf("Valor medio da matriz: %.3f\n", media);

	
}
