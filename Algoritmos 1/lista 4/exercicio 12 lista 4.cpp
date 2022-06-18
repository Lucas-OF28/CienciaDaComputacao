#include<conio.h>
#include<stdio.h>
main()
{
	float saldo, credito;
	printf("Informe o saldo medio: ");
	scanf("%f", &saldo);
	if(saldo>4000)
	{
	printf("Acima de 4000 o credito sera: %f",credito=(saldo*0.3));
	}
	else if (saldo>3000)
	{
	printf("De 3000 ate 4000 sera: %f",credito=(saldo*0.25));
	}
	else if(saldo>=2000)
	{
	printf("De 2000 ate 3000 sera: %f", credito=(saldo*0.2));
	}
	else if (saldo<2000)
	printf("Menor que 2000 sera: %f", credito=(saldo*0.1));
	getch();
}
