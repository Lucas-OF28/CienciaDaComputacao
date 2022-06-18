#include<conio.h>
#include<stdio.h>
main()
{
	int i,j;
	float m[2][3], p[2][3],soma[2][3];
	printf("Matriz M\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("[%d][%d]: ",i,j);
	scanf("%f", &m[i][j]);
	soma[i][j]=soma[i][j]+m[i][j];
	}	
	printf("\n");
	}
	printf("Matriz M\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%f\t", m[i][j]);
	}
	printf("\n");
	}
	printf("\nMatriz P\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("[%d][%d]: ",i,j);
	scanf("%f", &p[i][j]);
	soma[i][j]=soma[i][j]+p[i][j];
	}
	}
	printf("\nMatriz P\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%f\t", p[i][j]);
	}
	printf("\n");
	}
	printf("Vetor Soma\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%f\t",soma[i][j]);
	}
	printf("\n");
	}
	getch();
}
