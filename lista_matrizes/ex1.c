#include<stdio.h>
/* Dados duas matrizes reais de dimensão 2x3, escreva um programa para calcular a soma delas. */

int main(){
		//linha|coluna
	int mat1[2][3];
	int mat2[2][3];
	int soma[2][3];
	int i,j;
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			
			printf("Escreva o valor da matriz 1 linha %d, coluna %d: \n", i, j); //chamar a linha e coluna p ficar mais visual
			scanf("%d", &mat1[i][j]);
			
		}
	}
		for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			
			printf("Escreva o valor da matriz 2 linha %d, coluna %d: \n", i, j); //chamar a linha e coluna p ficar mais visual
			scanf("%d", &mat2[i][j]);
		}
	}
		for(i=0;i<2;i++){
			
			for(j=0;j<3;j++){
				
				soma[i][j] = mat1[i][j] + mat2[i][j];
				printf("%d + %d = %d\n", mat1[i][j], mat2[i][j], soma[i][j]);
				
			}
		}
		
	
}
