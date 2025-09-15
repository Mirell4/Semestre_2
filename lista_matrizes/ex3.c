#include<stdio.h>
/*Elabore um programa que solicite dados para uma matriz MxM, com m dado pelo usuário e exiba os dados
da matriz transposta.*/

int main(){
	
	int m;
	
	printf("Defina o tamanho da matriz:\n");
	scanf("%d", &m);
	
	int matriz[m][m];
	int i, j;
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("Insira o valor da linha %d, e coluna %d\n", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d ", matriz[j][i]);
		}
		
		printf("\n");
	}
	
	
}
