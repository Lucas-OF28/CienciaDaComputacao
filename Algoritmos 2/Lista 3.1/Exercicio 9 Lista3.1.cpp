#include<stdio.h>
#include<stdlib.h>

void imposto(float salario);
void novo_sal(float salario);
void classi(float salario);

main()
{
	float salario;
	int op=-1;
	printf("Menu de opcoes:\n");
	printf("1-Imposto\n2-Novo salario\n3-Classificacao:\n");
	printf("Digite a opcao desejada:\n");
	scanf("%d", &op);
	printf("Informe seu salario:\n");
	scanf("%f", &salario);
		switch(op)
		{
			case 1: imposto(salario);break;
			case 2: novo_sal(salario);break;
			case 3: classi(salario);break;
		}
		system("pause");
}
void imposto(float salario)
{
	float imp;
	if(salario<500)
		imp=salario*0.05;
	else if(salario>=500 && salario <850)
		     imp=salario*0.1;
		 else
		     imp=salario*0.1;
	printf("Valor do imposto: %f", imp);
}

void novo_sal(float salario)
{
	float aumento;
	if(salario>=1500)
		aumento=25;
	else if(salario>=750)
			aumento=50;
	    else if(salario>=450)
				aumento=75;
			 else
			 	aumento=100;
	printf("Novo salario: %f", aumento+salario);
}


void classi(float salario)
{
	if(salario<=700)
		printf("Mal remunerado");
	else 
		printf("Bem remunerado");
}
