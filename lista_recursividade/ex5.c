#include<stdio.h>
/*Escreva um programa recursivo em linguagem C para converter um n�mero da sua forma decimal para a forma
bin�ria. Dica: dividir o n�mero sucessivamente por 2, sendo que o resto da i-�sima divis�o vai ser o d�gito i do
n�mero bin�rio (da direita para a esquerda).*/

int binario(int num){
	
	if(num==0){
		return 0;
	} else{
		binario(num/2);
		printf("%d", num%2);
	}
	
}
int main(void){
	int num = 10;
	printf("o binario de %d eh ", num);
	binario(num);
}
