#include<stdio.h>
#include<conio.h>
main()
{
	float pe, jarda, milha,polega;
	printf("Informe a medida em pes: ");
	scanf("%f", &pe);
	polega=pe*12;
	jarda=pe/3;
	milha=jarda/1760;
	printf("Polegadas: %f\nJardas: %f\nMilhas: %f",polega, jarda, milha);
	getch();
	
}
