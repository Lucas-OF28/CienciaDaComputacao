#include<stdio.h>
#include<conio.h>
main()
{
	float sal_minimo, salario, salarios;
	printf("Informe o salario normal: ");
	scanf("%f", &salario);
	printf("Informe o salario minimo: ");
	scanf("%f", &sal_minimo);
	salarios= salario/sal_minimo;
	printf("A quantidade de salarios minimos que ele recebera sera: %f", salarios);
	getch();
	
}
