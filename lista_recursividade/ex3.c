#include<stdio.h>
/*A sequência de Fibonacci é a sequência de inteiros: 0,1,1,2,3,5,8,13,21,34, ....
Implemente uma função recursiva que calcule e imprima todos os elementos da série 
Fibonacci de 0 até n. Em que, n deve ser informado pelo usuário do programa.*/

int fibonacci(int n){
	
	if(n==0){
		return 0;
	} else if (n==1){
		return 1;
	} else {
		
		return fibonacci(n-1) + fibonacci(n-2);
		
	}
	
}
int main(void){
	
	int n, i;
	 
	printf("digite um numero\n");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		printf("%d ", fibonacci(i));
	}
	
}

