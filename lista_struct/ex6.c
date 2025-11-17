#include<stdio.h>
/*6. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter
o número de matrícula do aluno, seu nome e as notas de três provas. Defina também um
tipo para esta estrutura. Agora, escreva um programa que leia os dados de cinco alunos e
os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a
maior média geral dentre os cinco*/

int main(){
	
	float maior = 0;
	int i, j, alunomaior;
	
	typedef struct aluno{
		int matricula;
		char nome[100];
		int notas[3];
	}aluno;
	
	aluno vetaluno[5];

	for(i=0;i<5;i++){
		
		printf("insira sua matricula: ");
		scanf("%d", &vetaluno[i].matricula);
		getchar(); 
		printf("insira seu nome: ");
		fgets(vetaluno[i].nome, sizeof(vetaluno[i].nome), stdin);
		
		for(j=0;j<3;j++){
		printf("insira suas notas: ");
		scanf("%d", &vetaluno[i].notas[j]);
		}
		
		float media = (vetaluno[i].notas[0] + vetaluno[i].notas[1] + vetaluno[i].notas[2])/3.00;
		
			if(maior < media){
				
				maior = media;
				alunomaior = i;
				
			}
	}
	
	printf(" o nome do aluno com a maior media eh: %s", vetaluno[alunomaior].nome);
	
	for(i=0;i<3;i++){
		printf("suas notas sao: %d ", vetaluno[alunomaior].notas[i]);
	}
	
}
