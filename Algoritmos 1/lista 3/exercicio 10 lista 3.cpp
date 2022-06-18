#include<stdio.h>
#include<conio.h>
main()
{
	float area, lado1, lado2;
	printf("Informe o primeiro lado do quadrado: ");
	scanf("%f", &lado1);
	printf("Informe o segundo lado do quadrado: ");
	scanf("%f", &lado2);
	area=lado1*lado2;
	printf("A area do quadrado sera: %f", area);
	getch();
	
}
