#include<stdio.h>
/* faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números inteiros. Em seguida,
gere um vetor unidimensional pela soma dos números de cada coluna da matriz e mostrar na tela esse vetor. */

int main() {
    int matriz[3][3];
    int vetor[3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira um numero para a linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(j = 0; j < 3; j++){ 
        int soma = 0;    
        for(i = 0; i < 3; i++){ 
            soma += matriz[i][j];
        }
        vetor[j] = soma;       
    }
	
	//imprime matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
	
	//imprime vetor
    for(j = 0; j < 3; j++){
        printf("%d ", vetor[j]);
    }
    printf("\n");

    return 0;
}
