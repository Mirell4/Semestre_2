#include<stdio.h>
#include <math.h>
/*5. Usando a estrutura retângulo do exercício anterior, faça um programa que declare e leia
uma estrutura retângulo e um ponto, e informe se esse ponto está ou não dentro do
retângulo.*/


int main(){
	
	typedef struct ponto{
		
		float x,y;
		
	}ponto;
	
	typedef struct retangulo{
		
		ponto supesq;
		ponto infdir;
		
	}retangulo;
	
	retangulo r;
	ponto p;
	
	printf("Insira o valor dos pontos superiores esquerdos: ");
	scanf("%f %f", &r.supesq.x, &r.supesq.y );
	
	printf("Insira o valor dos pontos inferiores direitos: ");
	scanf("%f %f", &r.infdir.x, &r.infdir.y);
	
	printf("Insira o ponto a verificar (x y): ");
    scanf("%f %f", &p.x, &p.y);

    if (p.x >= r.supesq.x && p.x <= r.infdir.x &&
        p.y <= r.supesq.y && p.y >= r.infdir.y) {
        printf("O ponto esta dentro do retangulo.\n");
    } else {
        printf("O ponto esta fora do retangulo.\n");
    }

    return 0;
    
	
}
