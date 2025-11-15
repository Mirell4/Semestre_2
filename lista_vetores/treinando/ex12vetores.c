#include<stdio.h>
/*Crie um programa para gerenciar um sistema de reservas de mesas em uma casa de espetáculo. A casa possui
30 mesas de 5 lugares cada. O programa deverá permitir que o usuário escolha o código de uma mesa (100 a
129) e forneça a quantidade de lugares desejados. O programa deverá informar se foi possível realizar a
reserva e atualizar a reserva. Se não for possível, o programa deverá emitir uma mensagem. O programa deve
terminar quando o usuário digitar o código 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
ocupados.*/

int main(){
	
	int mesa[30];
	int lugares[30];
	int qtd, i, desejada;
	int ocupados = 0;
	
	for(i=0;i<30;i++){
		
		mesa[i] = 100 + i;
		lugares[i] = 5;
		
	}
	
	
	while(ocupados <= 150){
		printf("Insira a mesa desejada: ");
		scanf("%d", &desejada);
	
	if(desejada == 0){
		break;
		
	} else {
		
		for(i=0;i<30;i++){
			
			if(desejada == mesa[i]){
				
				printf("a mesa %d tem %d lugares disponiveis ", mesa[i], lugares[i]);
				printf("Insira a qtd de lugares desejada: ");
				scanf("%d", &qtd);
				
				}else if(lugares[i] - qtd != 0){
					lugares[i] -= qtd;
					ocupados += qtd;
					printf("Reserva realizada!");
				} else {
					printf("nao ha lugares disponiveis nessa mesa");
				}
				
			}
		
		}

	}
	
	printf("Todos os lugares foram ocupados");
}
