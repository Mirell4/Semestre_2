#include<stdio.h>
/* Escreva uma fun��o recursiva em C para calcular o m�ximo divisor comum de dois n�meros, mdc(x, y).
*/
int mdc(int x, int y){
	
	if(y == 0){
		
		return x;
		
	} else{
		
		return mdc(y, x%y);
	}
	
}
int main(void){
	
	int x = 18;
	int y = 48;
	
	printf("o mdc eh: %d", mdc(x,y));
	
}
