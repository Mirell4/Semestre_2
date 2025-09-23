#include<stdio.h>
/*Escreva um programa recursivo em linguagem C para converter um número da sua forma decimal para a forma
binária. Dica: dividir o número sucessivamente por 2, sendo que o resto da i-ésima divisão vai ser o dígito i do
número binário (da direita para a esquerda).*/

int binario(int num){
	
	if(num==0){
		return 0;
	} else{
		binario(num/2);
		printf("%d", num%2);
	}
	
}
int main(void){
	int num = 10;
	printf("o binario de %d eh ", num);
	binario(num);
}
