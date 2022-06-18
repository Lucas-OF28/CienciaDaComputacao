#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	float salario;
	int pcarro;
	int anoNascimento;	
}CLIENTES;

void ler(CLIENTES cliente[5]);
void mostrar( CLIENTES cliente[5]);
void salAcimaMedia(CLIENTES cliente[5]);
void qtdPossuiCarro( CLIENTES cliente[5]);
void salAcimaMedia( CLIENTES cliente[5], float mediaSal);
void client_Nasceram( CLIENTES cliente[5]);

main()

{
	CLIENTES cliente[5];
	
	ler(cliente);
	mostrar(cliente);
	salAcimaMedia(cliente);
	qtdPossuiCarro(cliente);
	client_Nasceram(cliente);
	
	system("pause");
	return 0;
}

void ler(CLIENTES cliente[5])

{
	int i,somaSal=0;
	float mediaSal;
	
	for(i=0;i<5;i++){
		printf("Informe o seu salario :");
		scanf("%f",&cliente[i].salario);
		
		printf("\nInforme 1-Possui carro 2-Nao possui carro :");
		scanf("%d",&cliente[i].pcarro);
		
		printf("\nInforme o seu ano de nascimento :");
		scanf("%d",&cliente[i].anoNascimento);
		
		somaSal = somaSal + cliente[i].salario;
		
	}
	
	mediaSal = somaSal/5;
}

void mostrar(CLIENTES cliente[5]){
	int i;
	
	
	for(i=0;i<5;i++){
		printf("Salario : %f",cliente[i].salario);
		printf("\nPossui carro : %d",cliente[i].pcarro);
		printf("\nData de nascimento : %d",cliente[i].anoNascimento);
	}
	
	
}

void qtdPossuiCarro(CLIENTES cliente[5]){
	int i,qtdCarro=0;
	
	for(i=0;i<5;i++){
	
		if(cliente[i].pcarro==1){
			qtdCarro++;
		}
	}
	printf("\nA quantidade de pessoas que possuem carros e : %d ",qtdCarro);
}

void salAcimaMedia(CLIENTES cliente[5],float mediaSal)
{
	int i,qtdSal=0;
	
	for(i=0;i<5;i++){
		
		if(cliente[i].salario>mediaSal){
			qtdSal++;
		}
	}
	
	printf("\nSalario acima da media : %f",qtdSal);
}

void client_Nasceram(CLIENTES cliente[5])
{
	int i,qtdNasceramEntre=0;
	for(i=0;i<5;i++){
	
		if(cliente[i].anoNascimento>=1960 && cliente[i].anoNascimento<1980){
			qtdNasceramEntre++;
		}
	}
	printf("\nQuantidade de clientes que nasceram entre 1960 e 1980 e : %d",qtdNasceramEntre);
}
