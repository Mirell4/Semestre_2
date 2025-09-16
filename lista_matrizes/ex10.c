	#include<stdio.h>
	/* Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal.*/
	
	int main(){
		int matriz[3][3];
		int i,j;
		int soma = 0;
		
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("Insira a linha %d da coluna %d", i,j);
				scanf("%d", &matriz[i][j]);
				
				if(i==j){
					soma += matriz[i][j];
				}
			}
		}
		
		printf(" A soma da diagonal principal e: %d\n", soma);
	}
