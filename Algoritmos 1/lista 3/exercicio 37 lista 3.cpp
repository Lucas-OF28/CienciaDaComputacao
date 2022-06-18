#include<stdio.h>
#include<conio.h>
main()
{
	float area, base, altura;
	printf("Informe a base do triangulo: ");
	scanf("%f", &base);
	printf("Informe a altura do triangulo: ");
	scanf("%f", &altura);
	area= (base*altura)/2;
	printf("A area do triangulo sera de: %f", area);
	getch();
	
}
