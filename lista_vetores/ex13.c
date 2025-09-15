#include<stdio.h>

/* Construa um programa que realize as reservas de passagens �reas de uma companhia. 
O programa deve permitir cadastrar o n�mero de 10 voos e definir a quantidade de lugares dispon�veis para cada um. 
Ap�s o cadastro, leia v�rios pedidos de reserva, constitu�dos do n�mero da carteira de identidade do cliente e do n�mero do voo desejado. 
Para cada cliente, verificar se h� possibilidade no voo desejado. Em caso afirmativo, imprimir o n�mero da identidade do cliente e o n�mero do voo, 
atualizando o n�mero de lugares dispon�veis. Caso contr�rio, avisar ao cliente a inexist�ncia de lugares. 
A leitura do n�mero 0 (zero) para o voo desejado indica o t�rmino da leitura de reservas. 
*/

int main() {

    int voo[10];
    int lugares[10];
    int desejado;
    int totalvagas = 0;
    int carteira;
    int i;

    for(i = 0; i < 10; i++) {
        voo[i] = i + 1;
        lugares[i] = 10;
    }

    while(totalvagas <= 100) {

        printf("\nInsira o numero do seu id: ");
        scanf("%d", &carteira);

        printf("Escolha o voo desejado: ");
        scanf("%d", &desejado);

        if(desejado == 0) {
            break;
        }

        for(i = 0; i < 10; i++) {

            if(desejado == voo[i]) {

                printf("O voo %d possui %d lugares disponiveis.\n", voo[i], lugares[i]);

                if(lugares[i] > 0) {
                    lugares[i] -= 1;
                    totalvagas += 1;
                    printf("Carteira %d com voo %d agendado!\n", carteira, voo[i]);
                } else {
                    printf("Nao ha mais assentos disponiveis nesse voo!\nEscolha outro ou pressione 0 para sair.\n");
                }

                break; // sai do for ap�s encontrar o voo
                
            } 
		}


    }

    if(totalvagas >= 100) {
        printf("Todos os voos ja foram preenchidos!\n");
    }

    return 0;
}

