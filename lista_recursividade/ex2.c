#include<stdio.h>
/*Crie uma função recursiva que receba um número inteiro positivo N e calcule o 
somatório dos números de 1 a N.*/

int soma(int N) {
    if (N == 1) {         
        return 1;
    } else {
        return N + soma(N-1);
    }
}

int main(void) {
    int N;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &N);

    int resultado = soma(N);

    printf("O somatorio de 1 ate %d eh %d\n", N, resultado);

    return 0;
}
