#include<stdio.h>
/*1. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior
endereço. */

int main(){
	
	int a=0;
	int b = 1;
	
	if(&a < &b){
		printf("a eh maior, seu valor eh: %p", &a);
	}
	else{
		printf("b eh maior, seu valor eh: %p", &b);
	}
	
	
}
