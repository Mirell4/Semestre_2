#include<stdio.h>

/*Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize vetores). Ao
final, o programa deverá imprimir quantas mercadorias proporcionam:
• lucro < 10%
• 10% <= lucro <= 20%
• lucro > 20%*/
int main(){
	
	int compra[100];
	int venda[100];
	int menor10 = 0;
	int entre1020 =0;
	int maior20 = 0;
	float lucro = 0;
	int i;
	
	
	for(i=0; i<100; i++){
		printf("Insira o preco de compra\n");
		scanf("%d", &compra[i]);
		printf("Insira o preco de venda\n");
		scanf("%d", &venda[i]);
	}
	
	for(i=0; i<100;i++){
		lucro = ((venda[i] - compra[i]) / compra[i]) * 100;
		if(lucro<10.0){
			menor10 ++;
		}else if (lucro> 20.0){
			maior20 ++;
		}else{
			entre1020++;
		}
		
	}
	
	printf("%d menor que 10\n %d entre 10 e 20\n %d maior que 20", menor10, entre1020, maior20);
	
}
