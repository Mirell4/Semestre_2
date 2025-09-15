#include <stdio.h>
/* Crie um programa para gerenciar um sistema de reservas de mesas em uma casa de espet�culo. A casa possui
30 mesas de 5 lugares cada. O programa dever� permitir que o usu�rio escolha o c�digo de uma mesa (100 a
129) e forne�a a quantidade de lugares desejados. O programa dever� informar se foi poss�vel realizar a
reserva e atualizar a reserva. Se n�o for poss�vel, o programa dever� emitir uma mensagem. O programa deve
terminar quando o usu�rio digitar o c�digo 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
ocupados.*/

int main() {
	
    int mesa[30];        
    int lugares[30];     
    int desejado;        
    int qtd;             
    int i;
    int total_ocupados = 0;

    for (i = 0; i < 30; i++) {
        mesa[i] = 100 + i; //129
        lugares[i] = 5;
    }

    
    while (total_ocupados < 150) {
        printf("\nInsira o codigo da mesa desejada (100-129) ou 0 para sair: ");
        scanf("%d", &desejado);

        if (desejado == 0) {
            break;
        }

        for (i = 0; i < 30; i++) {
            if (desejado == mesa[i]) {
                printf("Mesa %d possui %d lugares disponiveis.\n", mesa[i], lugares[i]);

                printf("Insira o numero de lugares que deseja: ");
                scanf("%d", &qtd);

                if (qtd <= lugares[i]) {
                    lugares[i] -= qtd;       // atualiza mesa
                    total_ocupados += qtd;   // lugares no total
                    printf("Reserva realizada!\n");
                } else {
                    printf("Nao ha lugares suficientes nesta mesa!\n");
                }
                break;
            }
        }

        if (total_ocupados >= 150) {
            printf("\nTodos os 150 lugares foram ocupados. Encerrando reservas.\n");
            break;
        }
    }
}

