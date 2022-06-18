#include<conio.h>
#include<stdio.h>
main()
{
	int hora;
	float horatrab,sal_mes,extra_depen,hora_extra,sal_bruto,sal_liq,boni,sal,depen,hora_ext,desc;
	
		printf("Informe o numero de horas trabalhadas: ");
		scanf("%d", &hora);

	while(hora!=1)
	{
		printf("Informe o salario minimo: ");
		scanf("%f", &sal);
		printf("Informe o numero de dependentes: ");
		scanf("%f", &depen);
		printf("Quantidade de horas extra: ");
		scanf("%f", &hora_ext);
		horatrab=sal*0.01;
		sal_mes=horatrab*hora;
		extra_depen=depen*32;
		hora_extra=horatrab*0.50;
		sal_bruto=sal_mes+extra_depen+hora_extra;
		if(sal_bruto<900)
		printf("Isento\n");
		else if(sal_bruto>900 && sal_bruto<1500)
		desc=sal_bruto*0.10;
		else
		desc=sal_bruto*0.20;
		sal_liq=sal_bruto-desc;
		if(sal_liq<=900)
		boni=sal_liq+100;
		else
		boni=sal_liq+50;
		printf("Salario a receber: %f", boni);
		printf("Informe o numero de horas trabalhadas: ");
		scanf("%d", &hora);
	}
	getch();
	
	
}
