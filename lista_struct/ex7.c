#include<stdio.h>
/*7. Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora,
minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa
estrutura e imprima a maior hora.*/

int main(){
	
	int i;
	int maior = -999;
	int indicemaior = -1;
	
	typedef struct horario{
		
		int hora;
		int minuto;
		int segundo;
		
	}hora;
	
	hora vethorario[5];

	for(i=0;i<5;i++){
	
		printf("Insira a hora: ");
		scanf("%d", &vethorario[i].hora);
		printf("Insira o minuto: ");
		scanf("%d", &vethorario[i].minuto);
		printf("Insira o segundo: ");
		scanf("%d", &vethorario[i].segundo);
	
	}
	
	
	for(i=0;i<5;i++){
		// tranforma tudo em segundos para ficar mais facil de calcular
		int totalSegundos = vethorario[i].hora*3600 + vethorario[i].minuto*60 + vethorario[i].segundo; 

		if(totalSegundos > maior){
    		maior = totalSegundos;
    		indicemaior = i;
		}
	}
	
	printf("A maior hora eh %d:%d:%d", vethorario[indicemaior].hora,vethorario[indicemaior].minuto, vethorario[indicemaior].segundo);
}

