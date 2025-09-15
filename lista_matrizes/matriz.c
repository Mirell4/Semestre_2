#include <stdio.h>

void main(){
	
	int mat[2][2] = {1, 2, 3, 4};
	int l, c;
	
	for( l=0; l<2; l++){
		for(c=0; c<2; c++){
			printf("%5d", mat[l][c]);
		}
	}
	
}
