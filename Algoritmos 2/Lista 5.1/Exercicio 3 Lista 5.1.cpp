#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char nome[60];
	float salario;
	int pcarro;
	int anoNascimento;	
}CLIENT;

void ler(CLIENT cliente[5]);
void mostrar(CLIENT cliente[5]);

main(){
	
	CLIENT cliente[5];
	
	ler(cliente);
	mostrar(cliente);
}

void ler(CLIENT cliente[5]){
	int i;
	
	for(i=0;i<5;i++){
		
		printf("Nome: ");
		fflush(stdin);
		scanf("%s",&cliente[i].nome);
		
		printf("Informe o seu salario: ");
		scanf("%f",&cliente[i].salario);
		
		printf("Informe 1-Tem carro\n 2-Nao tem carro: ");
		scanf("%d",&cliente[i].pcarro);
		
		printf("Informe o ano de nascimento: ");
		scanf("%d",&cliente[i].anoNascimento);
		
	}
}

void mostrar(CLIENT cliente[5]){
	int i;
	for(i=0;i<5;i++){
		
		printf("\nNome : %s",cliente[i].nome);
		printf("\nSalario : %f",cliente[i].salario);
		printf("\nPossui carro : %d",cliente[i].pcarro);
		printf("\nData de nascimento : %d",cliente[i].anoNascimento);
	}
}
