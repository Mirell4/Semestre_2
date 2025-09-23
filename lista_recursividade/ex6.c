#include<stdio.h>
int expoente(int x, int n){
	
	if(n == 0){
		return 1;
	} else {
		
		return x * expoente(x, n-1);
		
	}
}
int main (void){
	
	int x,n;
	int resultado;
	
	printf("Insira um numero e o seu expoente\n");
	scanf("%d %d", &x, &n);
	
	printf("%d", expoente(x,n));
	
	
}
