#include <stdio.h>
/*12 Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números
 * inteiros. Em seguida, gere um vetor unidimensional pela soma dos números de
 * cada coluna da matriz e mostrar na tela esse vetor. */

int main() {
  int mat[3][3];
  int vet[3] = {0};
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Insira m numero:\n");
      scanf("%d", &mat[i][j]);
    }
  }

  for (j = 0; j < 3; j++) {
    for (i = 0; i < 3; i++) {
      vet[j] += mat[i][j];
    }
    printf("%d ", vet[j]);
  }
}
