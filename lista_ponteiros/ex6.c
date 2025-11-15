#include<stdio.h>
/*6. Construa uma função que, recebendo como parâmetros quatro números inteiros, devolva ao módulo que o
chamou os dois maiores números dentre os quatro recebidos. Faça um programa que leia tantos conjuntos
de quatro valores quantos o usuário deseje e que acione a função para cada conjunto de valores, apresentando
a cada vez os dois maiores números. Se preferir, utilize vetor para armazenar o conjunto de valores.*/

void classificacao(int *numeros, int *maior, int *segundomaior){
	
	int i;
	
	if(numeros[0]< numeros[1]){
		
		*maior = numeros[0];
		*segundomaior = numeros[1];
		
		} else{
			*maior = numeros[1];
			*segundomaior = numeros[0];
		}
		
		
	for(i=2;i<4;i++){
		
		if (*maior < numeros[i]){
			
			*segundomaior = *maior;
			*maior = numeros[i];

		} else if(*segundomaior<numeros[i]){
			
			*segundomaior = numeros[i];	
			
		}
	}
	
}

int main(){
	
	int i;
	int numeros[4] = {0};
	int maior, segundomaior;
	int continuar;
	
	do{
		for(i=0;i<4;i++){
		
			printf("Insira um numero: ");
			scanf("%d", &numeros[i]);
		}
		
		classificacao(numeros,&maior, &segundomaior);
		
		printf("Continuar S = 1 | N = 0\n");
		scanf("%d", &continuar);
	}
	while(continuar == 1);
	printf("O maior numero eh %d \n", maior);
	printf("O segundo maior eh numero eh %d", segundomaior);
}
