#include<stdio.h>

/*Faça um programa em C que permita entrar com dados para um vetor VET do tipo inteiro com 20 posições,
em que podem existir vários elementos repetidos. Gere um vetor VET2 ordenado a partir do vetor VET e que
terá apenas os elementos não repetidos.*/

int main() {
    int vet[3];
    int vet2[3]; 
    int repetido[3] = {0}; 
    int num;    
    int i, j = 0; 

    for(i = 0; i < 3; i++) {
    	
        printf("Insira um numero:\n");
        scanf("%d", &num);

        vet[i] = num;

        if(repetido[num] != 1) {
        	
            vet2[j] = num;     
            j++;               
            repetido[num] = 1;
        }
    }

    for(i = 0; i < j; i++) { 
        printf("%d ", vet2[i]);
    }
}
