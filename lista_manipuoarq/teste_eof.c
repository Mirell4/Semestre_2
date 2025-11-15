#include<stdio.h>
#include<string.h>

int main(){
	
		FILE *arq;
		char c;
		arq = fopen("arquivo.txt","r");
		if(arq == NULL){
			printf("Erro na abertura do arquivo");
			system("pause");
			exit(1);
		}
	
		while((c = fgetc(arq))!= EOF)
			printf("%c", c);
			
		fclose(arq);
			
	return 0;	
}

