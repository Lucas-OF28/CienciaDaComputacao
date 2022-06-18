#include<stdio.h>
#include<conio.h>
main()
{
	float hora, n_aula,bruto,p_inss,inss, sal_liq;
	printf("Informe a quatidade de horas: ");
	scanf("%f", &hora);
	printf("Informe o numero de aulas: ");
	scanf("%f", &n_aula);
	printf("Informe o percentual do inss: ");
	scanf("%f", &p_inss);
	bruto= hora*n_aula;
	inss=bruto*p_inss/100;
	sal_liq=bruto-inss;
	printf("O salario bruto sera: %f\n", bruto);
	printf("O valor descontado pelo inss sera: %f\n",inss);
	printf("Seu salario liquido sera: %f",sal_liq);
	getch();
	
	
	
}
