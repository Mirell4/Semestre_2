#include<stdio.h>
/* Crie um programa para gerenciar um sistema de reservas de mesas em uma casa de espet�culo. A casa possui
30 mesas de 5 lugares cada. O programa dever� permitir que o usu�rio escolha o c�digo de uma mesa (100 a
129) e forne�a a quantidade de lugares desejados. O programa dever� informar se foi poss�vel realizar a
reserva e atualizar a reserva. Se n�o for poss�vel, o programa dever� emitir uma mensagem. O programa deve
terminar quando o usu�rio digitar o c�digo 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
ocupados.*/

int main(){
	
	int mesas[30];
	int lugares[30];
	int desejado;
	int qtd;
	int totallugares=0;
	int i;
	
	for(i=0;i<30;i++){
		
		mesas[i] = 100 + i;
		lugares[i] = 5;
	}
	
	while(totallugares<=150){
		
		printf("\nEscolha a mesa desejada 100-129: \n");
		scanf("%d", &desejado);
		
		if(desejado == 0){
			break;
		}
		
		for(i=0;i<30;i++){
			
			if(desejado==mesas[i]){
				
				printf("Mesa %d possui %d lugares disponiveis.\n", mesas[i], lugares[i]);
				 
				printf("Escolha a qtd de lugares:");
				scanf("%d", &qtd);
				
				
				if (qtd <= lugares[i]){
					
					lugares[i] -= qtd; //tira e recebe
					totallugares += qtd; // total recebe
					printf("Reserva realizada!");
					
				}else{
					printf("N�o ha lugares disponiveis nessa mesa!");
				}
				}
			
			}
		}
		
		if(totallugares>=150){
			printf("Todas as reservas foram realizdas!");
		}
		
		
	}


