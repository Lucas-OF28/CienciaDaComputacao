#include<conio.h>
#include<stdio.h>
main()
{
	char nome[2][30];
	float sal[2], aum[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("Nome: ");
		fflush(stdin);
		gets(nome[i]);
		printf("Salario: ");
		scanf("%f", &sal[i]);	
		aum[i]=sal[i]+sal[i]*0.08;
	}
	printf("\nAumento\n");
	for(i=0;i<2;i++)
	{
	printf("Nome: %s\t", nome[i]);
	printf("Aumento: %f\t", aum[i]);
	printf("\n");
	}
	getch();
}
