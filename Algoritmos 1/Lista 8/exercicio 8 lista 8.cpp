#include<conio.h>
#include<stdio.h>
main()
{
	int k,l, M[5][5], aux;
	for(k=0;k<5;k++)
	{
		for(l=0;l<5;l++)
		{
			printf("[%d][%d]: ",k,l );
			scanf("%d", &M[k][l]);
		}
	}
	for(k=0;k<5;k++)
	{
		for(l=0;l<5;l++)
		{
			printf("%d\t", M[k][l]);
		}
		printf("\n");
	
	}
	printf("\nSegunda linha pela quarta linha\n");
	for(k=0;k<5;k++)
	{
		aux=M[1][k];
		M[1][k]=M[3][k];
		M[3][k]=aux;
	}
	
	
	for(k=0;k<5;k++)
	{	
		
		for(l=0;l<5;l++)
		{
			printf("%d\t", M[k][l]);
		}
		printf("\n");
	}
	printf("\nQuarta Coluna pela primeira coluna\n");
	for(l=0;l<5;l++)
	{
		aux=M[l][0];
		M[l][0]=M[l][4];
		M[l][4]=aux;
	}
	for(k=0;k<5;k++)
	{	
		
		for(l=0;l<5;l++)
		{
			printf("%d\t", M[k][l]);
		}
		printf("\n");
		
	}
	getch();
}
