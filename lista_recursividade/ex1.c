#include<stdio.h>
/*1. Fa�a um programa em C que calcule, por meio de uma fun��o recursiva, a * b 
usando a adi��o, em que a e b s�o inteiros n�o-negativos*/

int multiplicacao(int a, int b){
	
	if(b == 0){
		return 0;
	} else{
		
		return a + multiplicacao(a, b-1);
	
	}
	
}
int main(void){

	int a = 3;
	int b = 4;
	int multiplicacao(int a, int b);
	int resultado;
	
	resultado = multiplicacao(a, b);
	printf("o resultado eh %d", resultado);
}
