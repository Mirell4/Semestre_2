#include<stdio.h>
/*Crie uma fun��o recursiva que receba um n�mero inteiro positivo N e calcule o 
somat�rio dos n�meros de 1 a N.*/

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
