#include<stdio.h>
/* 7. Considere um vetor de 10 elementos, contendo valores inteiros. Faça um programa que leia os valores para
preencher esse vetor, após a leitura o programa deve invocar uma função que calcule e devolva as frequências
absoluta e relativa desses valores no conjunto. (Observação: a frequência absoluta de um valor é o número
de vezes que esse valor aparece no conjunto de dados; a frequência relativa é a frequência absoluta dividida
pelo número total de dados). Utilize outros dois vetores para armazenar as frequências relativas e absolutas
e ao final do programa, imprima de forma tabulada os números e suas frequências absoluta e relativa*/

void frequencias(int *vet, int *freq_ab, float *freq_relat){
	
	int i, j;
	for(i=0;i<10;i++){
		
		freq_ab[i]=0;
		freq_relat[i]=0;
		
		for(j=0;j<10;j++){
			
			if(vet[i] == vet[j]){
				freq_ab[i]++;
			}
			
		}
		
		freq_relat [i] = (float)freq_ab[i]/10.0;
		
	}
	
}

int main(){
	
	int vet[10] = {0};
	int freq_ab[10] = {0};
	float freq_relat[10] = {0};
	int i;
	
	for(i=0;i<10;i++){
		printf("Insira um numero: ");
		scanf("%d", &vet[i]);
	}
	
	frequencias(vet, freq_ab, freq_relat);
	
	for(i=0;i<10;i++){
		printf("%d %d %f \n", vet[i], freq_ab[i], freq_relat[i]);
	}
}
