#include<stdio.h>
/*1. Faça um programa em C que calcule, por meio de uma função recursiva, a * b 
usando a adição, em que a e b são inteiros não-negativos*/

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
