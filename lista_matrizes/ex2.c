#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/*Crie um programa que preenche uma matriz 10x10 com n�meros aleat�rios entre 0 e 9. Em seguida solicite
um n�mero ao usu�rio e informe quantas vezes este n�mero foi sorteado e suas respectivas posi��es de
linha e coluna.*/

int main(){
	
	srand(time(NULL));
	
	int matriz[10][10];
	int i,j;
	int numero=0;
	int contador=0;
	
	for(i=0; i<10;i++){
		for(j=0; j<10;j++){
			matriz[i][j] = rand() %10; //preenche aleatoriamente
		}
	}
	
	printf("Insira um numero:\n");
	scanf("%d", &numero);
	
	for(i=0; i<10;i++){
		for(j=0; j<10;j++){
			if(numero == matriz[i][j]){
				contador++;
				printf("Encontrado na linha %d, coluna %d\n", i, j);
			}
		}
	}
	
	printf("Seu numero foi sorteado %d vezes\n", contador);
	

}
