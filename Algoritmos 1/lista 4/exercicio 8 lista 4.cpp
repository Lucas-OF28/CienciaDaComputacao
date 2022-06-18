#include<conio.h>
#include<stdio.h>
main()
{
	float n1, n2, opcao;
	printf("Informe um numero: ");
	scanf("%f", &n1);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	printf("1-Media\n2-Diferença\n3-Produto\n4-Divisao\n");
	printf("Escolha uma opcao: ");
	scanf("%f", &opcao);
	if(opcao==1)
	{
		printf("Media %f", (n1+n2)/2);
	}
	else
	{
		if (opcao==2)
		{
			if(n1>n2)
			printf("Diferenca %f", n1-n2);
			else
			printf("Diferenca %f", n2-n1);
			
		}
	else
	{
		if (opcao==3)
		{
			printf("Produto %f", n1*n2);
		}
		else if (opcao==4)
		{
		printf("Divisao %f", n1/n2);
		
		}
		else
		
			printf("Nao existe");
	
	}
	}
	getch();
	
}
