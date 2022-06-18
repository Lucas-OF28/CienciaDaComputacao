#include<conio.h>
#include<stdio.h>
main()

{
	float hora, salminimo, horatrab, salbruto, impost, final;
	printf("Informe o salario minimo: ");
	scanf("%f", &salminimo);
	printf("Informe as horas: ");
	scanf("%f", &hora);
	horatrab=salminimo*1/8;
	salbruto=hora*horatrab;
	impost=salbruto*0.03;
	final=salbruto-impost;
	printf("Hora trabalhada: %f\n", horatrab);
	printf("Salario bruto: %f\n", salbruto);
	printf("Imposto: %f\n", impost);
	printf("Salario final sera: %f", final);
	getch();
	
	
}
