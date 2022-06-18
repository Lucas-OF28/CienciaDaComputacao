#include<conio.h>
#include<stdio.h>
main()
{
	int preco, cod;
	printf("Informe o preco do produto: ");
	scanf("%d", &preco);
	printf("Informe o codigo de origem do produto: ");
	scanf("%d", &cod);
	if(cod==1)
	{
	printf("O preco do produto e: %d\nE sua origem sera Sul", preco);
	}
	else if(cod==2)
	{	
	printf("O preco do produto e: %d\nE sua origem sera Norte", preco);
	}	
	else if(cod==3)
	{
	printf("O preco do produto e: %d\nE sua origem sera Leste", preco);
	}
	else if(cod==4)
	{	
	printf("O preco do produto e: %d\nE sua origem sera Oeste", preco);
	}
	else if(cod==5 || cod==6)
	{	
	printf("O preco do produto e: %d\nE sua origem sera Nordeste", preco);
	}	
	else if(cod==7 || cod==8 || cod==9)
	{
	printf("O preco do produto e: %d\nE sua origem sera Sudeste", preco);
	}
	else if(cod>=10 || cod<=20)
	{
	printf("O preco do produto e: %d\nE sua origem sera Centro oeste", preco);
	}
	else if (cod>=21 || cod<=30)
	{
	printf("O preco do produto e: %d\nE sua origem sera Noroeste", preco);
	}
		
	getch();
	
}
