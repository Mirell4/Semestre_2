#include<stdio.h>
/*5. Faça um programa que receba dois valores inteiros, após receber esses dois valores, 
uma função deve calcular e retornar para o programa o resultado da soma e 
da subtração dos valores. Obs.: Apenas uma função deve realizar esta operação, 
desta forma, faça uso de ponteiros.*/

void operacoes(int n1, int n2, int *soma, int *sub){
	
	*soma = n1 + n2;
	*sub = n1 - n2;
}

int main(){
	
	int n1,n2, soma=0, sub=0;
	
	printf("Insira dois numeros: ");
	scanf("%d %d", &n1, &n2);
	
	operacoes(n1, n2, &soma, &sub);
	
	printf("A soma eh: %d \nA sub eh %d ", soma, sub);
	
}


