#include<stdio.h>
#include<conio.h>
main()
{
	float peso, engordar, emagrecer;
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	emagrecer=peso-peso*0.15;
	engordar=peso+peso*0.20;
	printf("O seu peso apos engordar sera: %f\n", engordar);
	printf("O seu peso apos emagrecer sera: %f", emagrecer);
	getch();
	
}
