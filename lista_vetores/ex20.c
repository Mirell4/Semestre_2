#include<stdio.h>
/* Fa�a um programa que leia a matr�cula e a m�dia de 100 alunos. Ordene da maior para a menor nota e imprima
uma rela��o contendo todas as matr�culas e m�dias.*/

int main() {
    int matricula[3];
    float media[3];
    int i, j, tempMat;
    float tempMedia;

    // Leitura das matr�culas e m�dias
    for(i = 0; i < 3; i++) {
        printf("Insira a matricula do aluno %d: ", i+1);
        scanf("%d", &matricula[i]);

        printf("Insira a media do aluno %d: ", i+1);
        scanf("%f", &media[i]);
    }

    // Ordenar da maior para a menor usando Bubble Sort simples
    for(i = 0; i < 3 - 1; i++) {
        for(j = 0; j < 3 - i - 1; j++) {
            if(media[j] < media[j+1]) {  // troca se o da frente for maior
                // troca as m�dias
                tempMedia = media[j];
                media[j] = media[j+1];
                media[j+1] = tempMedia;

                // troca as matr�culas correspondentes
                tempMat = matricula[j];
                matricula[j] = matricula[j+1];
                matricula[j+1] = tempMat;
            }
        }
    }

    // Impress�o da lista ordenada
    printf("\nAlunos da maior para a menor m�dia:\n");
    for(i = 0; i < 3; i++) {
        printf("Matricula: %d, Media: %.2f\n", matricula[i], media[i]);
    }

    return 0;
}

