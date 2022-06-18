#include<conio.h>
#include<stdio.h>
main()
{
	float salminimo, sal, quant;
	printf("Informe o salario minimo: ");
	scanf("%f", &salminimo);
	printf("Informe o salario seu salario: ");
	scanf("%f", &sal);
	quant=sal/salminimo;
	printf("A quatidade de salario minimos que ele recebe sao de: %f", quant);
	getch();
	
}
