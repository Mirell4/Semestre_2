#include<stdio.h>
/* O departamento comercial da Batatinha S/A necessita atualizar os valores de seus produtos no seu catálogo
de vendas. O presidente ordenou um reajuste de 4.78% para todos os itens. São 15 itens no catálogo. Sua
tarefa é elaborar um programa que leia o valor atual dos produtos e armazene em um vetor, e após isso efetue
o reajuste no valor dos produtos. O reajuste (acesso ao vetor) deverá ser feito utilizando ponteiros. Imprima
na tela o valor reajustado, usando também ponteiros */
 
 void reajuste(float *vetvalor, float *vetreajuste){
 	
 	int i;
 	
 	for(i=0;i<2;i++){
 		
 		*(vetreajuste+i) = *(vetvalor+i) * 1.0478;
 	}
 }
 
 int main(){
 	
 	float vetvalor[2];
 	float vetreajuste[2] = {0};
 	int i;
 	
 	for(i=0;i<2;i++){
	 
 	printf("Insira o valor dos produtos: ");
 	scanf("%f", &vetvalor[i]);
 	}
 	
 	reajuste(vetvalor, vetreajuste);
 	
 	for(i=0;i<2;i++){
	 
 	printf("Valor dos produtos reajustados: %.2f ", *(vetreajuste+i));

 	}
 }
