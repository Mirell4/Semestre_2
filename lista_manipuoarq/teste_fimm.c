#include<stdio.h>
#include<string.h>

int main(){
	
		int i, n;
		FILE *f = fopen("teste.txt", "r");
		if(f == NULL) {
			printf("Erro na abertura\n");
			system("pause");
			exit(1);
		}
		
		while(1){
			fscanf(f,"%d", &n);
			if(feof(f))
				break;
			printf("%d ", n);
		}
		
	fclose(f);
	return 0;	
}

