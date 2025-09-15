#include<stdio.h>

/*Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule e armazene a média
arredondada. Armazene também a situação do aluno: 1- Aprovado ou 2-Reprovado. Ao final o programa deve
imprimir uma listagem contendo as notas, a média e a situação de cada aluno em formato tabulado. Utilize
quantos vetores forem necessários para armazenar os dados.*/

int main(){
	
	int nota1[15];
	int nota2[15];
	int situacao[15];
	int media[15];
	int i;
	
	
	for(i=0;i<15;i++){
		
		printf("Insira sua nota 1:");
		scanf("%d", &nota1[i]);
		
		printf("Insira sua nota 2:");
		scanf("%d", &nota2[i]);
		
		media[i] = (nota1[i] + nota2[i])/2;
		
		if(media[i]>=7){
			situacao[i] = 1;
		} else {
			situacao[i] = 2;
		}
		
	}
	
	for(i=0;i<15;i++){
		
	printf("Nota 1: %d | Nota 2: %d | Media: %d | Situacao: %d \n", nota1[i], nota2[i], media[i], situacao[i]); 
	
	}
}

