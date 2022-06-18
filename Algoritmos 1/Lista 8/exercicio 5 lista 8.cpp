#include<conio.h>
#include<stdio.h>
main()
{
	int i,j;
	float m[2][3],t[2][3];
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("[%d][%d]: ", i,j);
	scanf("%f", &m[i][j]);
	t[i][j]=m[i][j]*3;
	}
	}
	printf("\nVetor Triplo\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%f\t",t[i][j]);
	}
	printf("\n");
	}
	getch();
}
