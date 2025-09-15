#include<stdio.h>
/*Construa um programa que armazene o código, a quantidade, o valor de compra e o valor de venda de 30
produtos. A listagem pode ser de todos os produtos ou somente de um ao se digitar o código.*/

int main(){
	
	int codigo[30];
	int quantidade[30];
	int valorcompra[30];
	int valorvenda[30];
	int escolha;
	int desejado;
	int i;
	
	for(i=0; i<30;i++){
		printf("Insira o codigo:");
		scanf("%d", &codigo[i]);
		
		printf("Insira o quantidade:");
		scanf("%d", &quantidade[i]);
		
		printf("Insira o valor da compra:");
		scanf("%d", &valorcompra[i]);
		
		printf("Insira o valor de venda:");
		scanf("%d", &valorvenda[i]);
	}
	
	printf("Insira o que deseja listar:\n1 todos os produtos | 2 produto especifico\n");
	scanf("%d", &escolha);
	
	if(escolha == 1){
		
		for(i=0;i<30;i++){
			printf(" Cod: %d | Qtd: %d | Vc: %d | Vv: %d \n", codigo[i], quantidade[i], valorcompra[i], valorvenda[i]);
			
		} 
		
	}else{
			
			printf("Digite o cod do produto desejado:\n");
			scanf("%d", &desejado);
			
			for(i=0;i<30;i++){
				
				if(desejado == codigo[i]){
					printf("Cod: %d | Qtd: %d | Vc: %d | Vv: %d \n", codigo[i], quantidade[i], valorcompra[i], valorvenda[i]);
				}
				
				
			}
			
		}
		
	}
	

