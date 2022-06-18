#include<stdio.h>
#include<conio.h>
main()
{
	float depo, juros, rend, total;
	printf("Informe o valor do deposito: ");
	scanf("%f", &depo);
	printf("Informe o valor dos juros: ");
	scanf("%f", &juros);
	rend=depo*(juros/100);
	total=rend+depo;
	printf("O seu rendimento sera: %f\nE seu rendimento total sera: %f", rend, total);
	getch();
	
}
