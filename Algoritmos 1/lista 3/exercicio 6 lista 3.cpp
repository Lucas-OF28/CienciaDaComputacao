#include<stdio.h>
#include<conio.h>
main()
{
	float salario_fixo, vendas, comissao, salario_final;
	printf("Informe o salario fixo: ");
	scanf("%f", &salario_fixo);
	printf("informe o numero de vendas: ");
	scanf("%f", &vendas);
	comissao=vendas*0.04;
	salario_final=salario_fixo+comissao;
	printf("O seu salario final com comissao sera: %f", salario_final);
	getch();
	
	}
