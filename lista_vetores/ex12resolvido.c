#include<stdio.h>
/* Crie um programa para gerenciar um sistema de reservas de mesas em uma casa de espetáculo. A casa possui
30 mesas de 5 lugares cada. O programa deverá permitir que o usuário escolha o código de uma mesa (100 a
129) e forneça a quantidade de lugares desejados. O programa deverá informar se foi possível realizar a
reserva e atualizar a reserva. Se não for possível, o programa deverá emitir uma mensagem. O programa deve
terminar quando o usuário digitar o código 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
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
					printf("Não ha lugares disponiveis nessa mesa!");
				}
				}
			
			}
		}
		
		if(totallugares>=150){
			printf("Todas as reservas foram realizdas!");
		}
		
		
	}


