#include<stdio.h>
/*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.*/

int main(){
	int mat[3][3];
	int i,j;
	int soma = 0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Insira a linha %d da coluna %d\n", i,j);
			scanf("%d", &mat[i][j]);
			
			if(i>j){
				soma += mat[i][j];
			}
		}
	}
	
	printf("a soma dos elementos abaixos da diagonal principal sao: %d\n", soma);
}


