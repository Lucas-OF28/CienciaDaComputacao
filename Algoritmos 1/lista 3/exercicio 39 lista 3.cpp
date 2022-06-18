#include<stdio.h>
#include<conio.h>
main()
{
	float area, pi, raio;
	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);
	pi=3.14;
	area=pi*(raio*raio);
	printf("A area do circulo sera: %f", area);
	getch();
	
}
