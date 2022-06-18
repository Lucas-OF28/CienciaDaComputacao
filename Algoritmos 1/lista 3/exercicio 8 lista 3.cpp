#include<stdio.h>
#include<conio.h>
main()
{
	int peso_kg, peso_gramas;
	printf("Informe seu peso em kg: ");
	scanf("%d", &peso_kg);
	peso_gramas=peso_kg*1.000;
	printf("O seu peso convertido em gramas sera: %d", peso_gramas);
	getch();
	
}
