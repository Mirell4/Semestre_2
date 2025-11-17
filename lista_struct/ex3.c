#include<stdio.h>
#include <math.h>
/* 3. Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e
Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles, considere
a mesma fórmula do exercício anterior.*/

int main(){
	
	float distanciacoordenada = 0;
	
	typedef struct pontos{
		
		float x1, x2, y1,y2;
		
	}pontos;
	
	pontos distancia;
	
	printf("Insira as diastancias x1 | x2 | y1 | y2 ");
	scanf("%f %f %f %f", &distancia.x1, &distancia.x2, &distancia.y1, &distancia.y2);
	
	distanciacoordenada = sqrt((distancia.x2 - distancia.x1) * (distancia.x2 - distancia.x1) +
    (distancia.y2 - distancia.y1) * (distancia.y2 - distancia.y1));

	
	printf("Distancia da coordenada %f ", distanciacoordenada);
	
	
	
}
