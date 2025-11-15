#include<stdio.h>
#include<string.h>

int main(){
	
		int i, n;
		FILE *f = fopen("arquivo.txt", "r");
		if(f == NULL) {
			printf("Erro na abertura\n");
			system("pause");
			exit(1);
		}
		
		while(1){
			fscanf(f,"%d", &n);
			printf("%d ", n);
			if(feof(f))
				break;
			
		}
		
	fclose(f);
	return 0;	
}

