#include<stdio.h>
/* 8. O laboratório de agropecuária da Universidade Federal do Capa Bode tem um termômetro de extrema
precisão, utilizado para aferir as temperaturas de uma estufa onde cultivam uma variedade de jaca
transgênica, com apenas um caroço do tamanho de uma semente de laranja. O problema é que este
termômetro dá os resultados na escala Kelvin (K) e os pesquisadores que atuam perto da estufa são
americanos, acostumados coma escala Fahrenheit (F). Você deve criar um programa para pegar uma lista de
24 temperaturas em Kelvin e convertê-las para Fahrenheit. O problema maior é que esses pesquisadores
querem que você faça essa conversão e imprima os resultados utilizando ponteiros*/

void converter(float *vetkelvin, float *vetfahrenheit){
	
	int i;
	
	for(i=0;i<2;i++){
		
		*(vetfahrenheit+i) = (*(vetkelvin+i) - 273.15) * 1.8 + 32.0;
		
	}
	
}

int main(){
	
	float vetkelvin[2] = {0};
	float vetfahrenheit[2] = {0};
	int i;
	
	for(i=0;i<2;i++){
	
		printf("Insira a temperatuda em kelvin ");
		scanf("%f", &vetkelvin[i]);
	}
	
	converter(vetkelvin, vetfahrenheit);
	
	for(i=0;i<2;i++){
	
		printf("%.2f = %.2f\n", *(vetkelvin+i), *(vetfahrenheit+i));
	}
}
