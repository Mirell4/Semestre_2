#include<stdio.h>
#include <math.h>
/* 2.0 Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e
Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das
coordenadas, isto é, posição (0, 0). Para realizar o cálculo, utilize a fórmula a seguir:
distancia entre dois pontos*/

int main(){
	
	float distanciacoordenada = 0;
	
	typedef struct pontos{
		
		float x, y;
		
	}pontos;
	
	pontos distancia;
	
	printf("Insira as diastancias x | y ");
	scanf("%f %f", &distancia.x, &distancia.y);
	
	distanciacoordenada = sqrt((0 - distancia.x) * (0 - distancia.x) +
    (0 - distancia.y) * (0 - distancia.y));


	
	printf("Distancia da coordenada %f ", distanciacoordenada);
	
	
	
}
