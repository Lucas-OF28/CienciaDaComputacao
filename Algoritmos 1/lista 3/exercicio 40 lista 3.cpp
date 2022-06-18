#include<stdio.h>
#include<conio.h>
main()
{
	float raio, comp, area, volu, pi;
	printf("Informe raio da esfera: ");
	scanf("%f", &raio);
	pi=3.14;
	comp= 2*pi*raio;
	area=pi*(raio*raio);
	volu=(3/4.0)*pi*(raio*raio*raio);
	printf("O comprimento dessa esfera sera: %f\nA sua area sera de: %f\nO volume dessa esfera sera de: %f", comp, area, volu);
	getch();
	 
}
