#include<stdio.h>
#include<conio.h>
main()
{
	float diag_maior,diag_menor,area;
	printf("Informe a diagonal maior do lasango: ");
	scanf("%f", &diag_maior);
	printf("Informe a diagonal menor do losando: ");
	scanf("%f", &diag_menor);
	area=(diag_maior*diag_menor)/2;
	printf("A area do losando sera: %f", area);
	getch();
	
}
