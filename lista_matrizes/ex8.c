#include<stdio.h>
/* Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.*/

int main(){
	
		int mat[3][3];
		int i,j;
		int soma = 0;
		
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				
				printf("Insira a linha %d e coluna %d \n", i,j);
				scanf("%d", &mat[i][j]);
				
				if(j>i){ //se fosse abaixo seria i>j
					soma += mat[i][j];
				}
			}
		}

		printf("A soma dos elementos acima da diagonal principal e: %d\n", soma);
	
}
