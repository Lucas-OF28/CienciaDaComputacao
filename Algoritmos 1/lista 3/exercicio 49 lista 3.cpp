#include<conio.h>
#include<stdio.h>
main()
{
	float sal, saldototal, cheq1, cheq2, cpmf;
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	cpmf=0.0038;
	cheq1=sal*cpmf;
	sal= sal-cheq1;
	cheq2=sal*cpmf;
	sal=sal-cheq2;
	printf("O seu salario apos saque sera: %f", sal);
	getch();
	
}
