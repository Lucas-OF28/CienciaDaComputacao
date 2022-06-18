#include<conio.h>
#include<stdio.h>
main()
{
	int i, j;
	float m[2][3],sl[2];
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("[%d][%d]: ", i,j);
	scanf("%f", &m[i][j]);
	sl[i]=sl[i]+m[i][j];
	}
	}
	printf("\nMatriz M\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%f\t",m[i][j]);
	}
	printf("\n");
	}
	printf("\nA soma de cada linha\n");
	for(i=0;i<2;i++)
	{
		printf("%f\n",sl[i]);
	}
	
	getch();
}
