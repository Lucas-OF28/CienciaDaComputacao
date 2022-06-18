#include<conio.h>
#include<stdio.h>
main()
{
	int i ,j;
	float m[4][5],sl[4]={0},sc[5]={0};
	for(i=0;i<4;i++)
	{
	for(j=0;j<5;j++)
	{
	printf("[%d][%d]: ", i,j);
	scanf("%f", &m[i][j]);
	sl[i]=sl[i]+m[i][j];
	sc[j]=sc[j]+m[i][j];
	}
	printf("\n");
	}
		printf("\nMatriz Soma\n");
	for(i=0;i<4;i++)
	{
	for(j=0;j<5;j++)
	{
	printf("%f\t",m[i][j]);
	}
	printf("\n");
	}
		printf("\nSoma Linha\n");
	for(i=0;i<4;i++)
	{
	printf("%f\n",sl[i]);
	}
		printf("\nSoma Coluna\n");
	for(j=0;j<5;j++)
	{
	printf("%f\n",sc[j]);
	}
	getch();
	}

