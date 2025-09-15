#include<stdio.h>
/* Fa�a um programa que leia e armazene v�rios n�meros, at� digitar o n�mero 0. Imprimir quantos n�meros
iguais ao �ltimo n�mero foram lidos. O limite de n�meros � 100.*/

int main() {
    int numeros[100];
    int contador = 0;     
    int iguais = 0;
    int ultimo;
    int i;

    // leitura dos n�meros
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
