#include<stdio.h>
#include<conio.h>
main()
{
	int base_maior, base_menor, altura, area;
	printf("Informe a base maior do trapezio: ");
	scanf("%d", &base_maior);
	printf("Informe a base menor do trapezio: ");
	scanf("%d", &base_menor);
	printf("Informe a altura do trapezio: ");
	scanf("%d", &altura);
	area=(base_maior+base_menor)*altura/2;
	printf("A area do trapezio sera: %d", area);
	getch();
		
}
