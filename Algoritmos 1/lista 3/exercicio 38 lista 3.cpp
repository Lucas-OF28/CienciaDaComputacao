#include<stdio.h>
#include<conio.h>
main()
{
	float area, base_maior, base_menor, altura;
	printf("Informe a base maior do trapezio: ");
	scanf("%f", &base_maior);
	printf("Informe a base menor do trapezio: ");
	scanf("%f", &base_menor);
	printf("Informe a altura do trapezio: ");
	scanf("%f", &altura);
	area=((base_maior+base_menor)*altura)/2;
	printf("A area do trapezio sera: %f", area);
	getch();
	
}
