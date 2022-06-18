#include<conio.h>
#include<stdio.h>
main()
{
	int i,j,M[2][3];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d][%d]: ",i,j);
			scanf("%d", &M[i][j]);
		}	
	}
		printf("\nMatriz \n");
		for(i=0;i<2;i++)
		{
		for(j=0;j<3;j++)
		{
		printf("%d\t",M[i][j]);
		}
		printf("\n");
		}
	getch();
}

