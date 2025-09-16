#include<stdio.h>
/*Suponha dois vetores de 30 elementos cada, contendo: código e telefone. Faça um programa que permita
buscar pelo código e imprimir o telefone.*/

int main(){
	
	int cod[30];
	int tel[30];
	int buscar, encontrado=0;
	int i,j;
	
	for(i=0;i<30;i++){
			
			printf("Insira um codigo de 1 - 30\n");
			scanf("%d", &cod[i]);
			
			printf("Insira um telefone\n");
			scanf("%d", &tel[i]);
		
	}
	
	printf("Insira o codigo do telefone que deseja buscar 1 - 30\n");
	scanf("%d", &buscar);
	
	for(i=0;i<30;i++){
		if(buscar==cod[i]){
			printf("%d", tel[i]);
			encontrado = 1;
			break;
		}
	}
	
	if(encontrado==0){
		printf("Codigo inexistente!");
	}
	
}
