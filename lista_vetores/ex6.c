#include<stdio.h>

/* Construa um programa que permita armazenar o sal�rio de 20 pessoas. Calcular e armazenar o novo sal�rio
sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o sal�rio e o novo sal�rio. Declare
quantos vetores forem necess�rios. */
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
