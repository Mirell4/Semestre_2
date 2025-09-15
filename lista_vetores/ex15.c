#include<stdio.h>
/* Faça um programa que leia e armazene vários números, até digitar o número 0. Imprimir quantos números
iguais ao último número foram lidos. O limite de números é 100.*/

int main() {
    int numeros[100];
    int contador = 0;     
    int iguais = 0;
    int ultimo;
    int i;

    // leitura dos números
    for(i = 0; i < 100; i++) {
        printf("Insira um numero (0 para parar): ");
        scanf("%d", &numeros[i]);

        if(numeros[i] == 0) {
            break;
        }

        contador++;
    }

    if(contador == 0) {
        printf("Nenhum numero valido foi digitado.\n");
        return 0;
    }


	ultimo = numeros[contador - 1];

    for(i = 0; i < contador; i++) {
        if(numeros[i] == ultimo) {
            iguais++;
        }
    }

    printf("O numero %d foi digitado %d vezes.\n", ultimo, iguais);

    return 0;
}
