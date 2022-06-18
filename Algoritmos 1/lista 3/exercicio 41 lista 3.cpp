#include<stdio.h>
#include<conio.h>
main()
{
	float peso_q, peso_g;
	printf("Informe seu peso em quilos: ");
	scanf("%f", &peso_q);
	peso_g=peso_q*1000;
	printf("Seu peso em gramas sera: %f", peso_g);
	getch();
	
}
