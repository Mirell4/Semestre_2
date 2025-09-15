#include<stdio.h>

/* Construa um programa que permita armazenar o salário de 20 pessoas. Calcular e armazenar o novo salário
sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o salário e o novo salário. Declare
quantos vetores forem necessários. */
int main(){
	
	float salario[3] = { 30, 20, 10};
	float salarionovo[3];
	float reajuste = 1.08;
	int i;
	
	for(i=0; i<3; i++){
		
		salarionovo[i]= salario[i] * reajuste;
	}
	
	for(i=0; i<3; i++){
		printf("salario antigo: %0.2f - salario novo: %0.2f\n", salario[i], salarionovo[i]);
	}
	
	
	
}
