#include<stdio.h>
#include<conio.h>
main()
{
	float sal, per_aum, aum, novo_sal;
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	printf("Informe o percentual de aumento: ");
	scanf("%f", &per_aum);
	aum=sal*(per_aum/100);
	novo_sal=sal+sal*(per_aum/100);
	printf("O valor do aumento sera: %f\nE seu novo salario sera: %f",aum, novo_sal);
	getch();
}
