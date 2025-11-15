#include<stdio.h>
/* Construa um programa que permita armazenar o salário de 3 pessoas. Calcular e armazenar o novo salário
sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o salário e o novo salário. Declare
quantos vetores forem necessários.*/

int main(){
	
	float vetsalario[3];
	float vetsalarionovo[3] = {0};
	float reajuste = 1.08;
	int i;
	
	
	for(i=0;i<3;i++){
		printf("Insira seu salario: ");
		scanf("%f", &vetsalario[i]);
		
		vetsalarionovo[i] = vetsalario[i] * reajuste;
	}

	for(i=0;i<3;i++){
		
		printf("%.2f reajustado: %.2f\n", vetsalario[i], vetsalarionovo[i]);
		
	}
}
