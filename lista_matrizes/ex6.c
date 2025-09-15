#include<stdio.h>

/* Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas*/

int main(){
	
	int mat1[4][4];
	int mat2[4][4];
	int maior[4][4];
	int i,j;
	

	for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
        	printf("Insira o valor da linha %d e coluna %d da mat1: ", i, j);
        	scanf("%d", &mat1[i][j]);
   	 	}
	}


	for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
        	printf("Insira o valor da linha %d e coluna %d da mat2: ", i, j);
        	scanf("%d", &mat2[i][j]);
    	}
	
	}

	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			if(mat1[i][j]>mat2[i][j]){
				maior[i][j] = mat1[i][j];
			}else{
				maior[i][j] = mat2[i][j];
			}
			printf("%d ", maior[i][j]);
		}
		printf("\n");
	}
	
}
