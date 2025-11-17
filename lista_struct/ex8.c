#include<stdio.h>
/* 8. Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
Faça uso de estruturas aninhadas e definição de novo tipo de dado. Agora, escreva um
programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa mais nova
e da mais velha.*/

typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Pessoa{
    char nome[100];
    Data nascimento;
} Pessoa;

Pessoa pessoas[6];

int main() {
	
    int i;
    int maisVelha = 0, maisNova = 0;

    for(i = 0; i < 6; i++) {
        printf("Pessoa %d\n", i+1);
        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        printf("Dia, mes, ano de nascimento: ");
        scanf("%d %d %d", &pessoas[i].nascimento.dia,
                           &pessoas[i].nascimento.mes,
                           &pessoas[i].nascimento.ano);
        getchar(); // limpa o \n do buffer
        printf("\n");
    }

    for(i = 1; i < 6; i++) {

        // Verifica mais velha
    if (pessoas[i].nascimento.ano < pessoas[maisVelha].nascimento.ano) {
        maisVelha = i;
    } else if (pessoas[i].nascimento.ano == pessoas[maisVelha].nascimento.ano) {
        if (pessoas[i].nascimento.mes < pessoas[maisVelha].nascimento.mes) {
            maisVelha = i;
        } else if (pessoas[i].nascimento.mes == pessoas[maisVelha].nascimento.mes) {
            if (pessoas[i].nascimento.dia < pessoas[maisVelha].nascimento.dia) {
                maisVelha = i;
            }
        }
    }

    // Verifica mais nova
    if (pessoas[i].nascimento.ano > pessoas[maisNova].nascimento.ano) {
        maisNova = i;
	    } else if (pessoas[i].nascimento.ano == pessoas[maisNova].nascimento.ano) {
	        if (pessoas[i].nascimento.mes > pessoas[maisNova].nascimento.mes) {
	            maisNova = i;
	        } else if (pessoas[i].nascimento.mes == pessoas[maisNova].nascimento.mes) {
	            if (pessoas[i].nascimento.dia > pessoas[maisNova].nascimento.dia) {
	                maisNova = i;
	            }
	        }
	    }
    }

    // Exibe resultados
    printf("Pessoa mais velha: %s", pessoas[maisVelha].nome);
    printf("Pessoa mais nova: %s", pessoas[maisNova].nome);

    return 0;
}

