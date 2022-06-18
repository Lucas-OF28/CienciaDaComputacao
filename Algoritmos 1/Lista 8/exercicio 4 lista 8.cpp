#include<conio.h>
#include<stdio.h>
main()
{
	int i,j;
	float m[2][3],a[2][3];
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("[%d][%d]: ", i, j);
	scanf("%f", &m[i][j]);
	a[i][j]=m[i][j]/2;
	}
	}
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%f\t", a[i][j]);
	}
	printf("\n");
	}
	getch();
	
}
