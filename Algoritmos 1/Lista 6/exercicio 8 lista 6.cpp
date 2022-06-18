#include<conio.h>
#include<stdio.h>
main()
{
	int cliente,conta,cont=0,neg=0,pos=0;
	float saldo,soma=0;
	char nome[30];
	printf("Informe o saldo: ");
	scanf("%f", &saldo);
	while(saldo!=-999 && cliente!=10)
	{		
		printf("Informe o numero da conta: ");
		scanf("%d", &conta);
		printf("Informe seu nome: ");
		fflush(stdin);
		gets(nome);
		soma=soma+saldo;
		cont++;
		if(saldo>0)
		{
		printf("Positivo\n");
		pos++;
		}
		else
		{
		printf("Negativo\n");
		neg++;
		}
		printf("Informe o saldo: ");
		scanf("%f", &saldo);
	}
	printf("Numero de clientes com a conta negativa: %d\n", neg);
	printf("Total de clientes: %d\n", cont++);
	printf("Percentual de clientes com saldo positivo: %f\n", (cont/pos)*100.0);
	printf("Saldo da agencia: %f\n", soma);
	getch();
	
}
