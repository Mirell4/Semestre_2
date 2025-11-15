#include<stdio.h>
/*9. A Google está desenvolvendo um novo sistema operacional para máquinas de venda de bolinhas de borracha
de R$1,00, mas precisa realizar testes no Gerenciador de Memória desse novo sistema. Você foi contratado
para fazer um programa para verificar se o gerenciador de memória está funcionando corretamente. Seu
programa deverá ler 3 números inteiros, 3 números decimais, 3 letras, armazená-las em variáveis, e depois,
através de ponteiros, trocar os seus valores, substituindo todos os números inteiros pelo número 2014, os
decimais por 9.99, e as letras por ’Y’. Depois da substituição, o programa deverá exibir o valor das variáveis já
devidamente atualizados.*/

void alterar(int *vetinteiros, float *vetdecimais, char *vetletras){
	
	int i;
	for(i=0;i<3;i++){
		*(vetinteiros+i) = 2014;
		*(vetdecimais+i) = 9.99;
		*(vetletras + i) = 'Y';
	}
	
}

int main(){
	
	int i;
	int vetinteiros[3] = {0};
	float vetdecimais[3]= {0};
	char vetletras[3] = {0};
	
	for(i=0;i<3;i++){
	printf("insira um numero inteiro ");
	scanf("%d", &vetinteiros[i]);
	printf("insira um numero decimal ");
	scanf("%f", &vetdecimais[i]);
	printf("insira uma letra ");
	scanf(" %c", &vetletras[i]);
	}
	
	alterar(vetinteiros, vetdecimais, vetletras);
	
	for(i=0;i<3;i++){
		
		printf("Vetor de inteiros %d | %.2f | %c\n", *(vetinteiros+i), *(vetdecimais+i), *(vetletras+i));
		
	}
	
}
