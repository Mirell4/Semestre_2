#include<stdio.h>
#include <math.h>

/* 4. Cria uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto superior
esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura
Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura
retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo. */


int main(){
	
	float area;
	float largura;
	float altura;
	float diagonal;
	float perimetro;
	
	typedef struct ponto{
		
		float x,y;
		
	}ponto;
	
	typedef struct retangulo{
		
		ponto supesq;
		ponto infdir;
		
	}retangulo;
	
	
	retangulo r;
	
	printf("Insira o valor dos pontos superiores esquerdos: ");
	scanf("%f %f", &r.supesq.x, &r.supesq.y );
	
	printf("Insira o valor dos pontos inferiores direitos: ");
	scanf("%f %f", &r.infdir.x, &r.infdir.y);
	
    largura = r.infdir.x - r.supesq.x;
    altura  = r.supesq.y - r.infdir.y;

    area = largura * altura;

    diagonal = sqrt(largura*largura + altura*altura);

    perimetro = 2 * (largura + altura);

    printf("Area: %.2f \n", area);
    printf("Diagonal: %.2f\n", diagonal);
    printf("Perimetro: %.2f\n", perimetro);
	
}
