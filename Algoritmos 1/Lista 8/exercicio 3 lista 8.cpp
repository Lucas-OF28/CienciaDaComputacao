#include<conio.h>
#include<stdio.h>
main()

{
	int i, j;
	float m[2][3],p[2][3],d[2][3];
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("[%d][%d]: ",i,j);
		scanf("%f", &m[i][j]);
	}
	}
	printf("\nVetor M\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%f\t",m[i][j]);
	}
	printf("\n");
	}
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("[%d][%d]: ", i,j);
		scanf("%f", &p[i][j]);
		d[i][j]=m[i][j]-p[i][j];
	}
	}
	printf("\nVetor P\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%f\t",p[i][j]);
	}
	printf("\n");
	}
	printf("\nVetor Diferenca\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%f\t",d[i][j]);
	}
	printf("\n");
	}
	getch();
	}	
