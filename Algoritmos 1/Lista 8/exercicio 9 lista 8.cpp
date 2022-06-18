#include<conio.h>
#include<stdio.h>
main()
{
	int i,j;
	char nome[2][2][30],delega[2][30];
	float alt[2][2],maior=0;
	for(i=0;i<2;i++)
	{
		printf("Informe a delegacao %d: ", i+1);
		fflush(stdin);
		gets(delega[i]);
		for(j=0;j<2;j++)
		{
		printf("Atleta %d: ",j+1);
		fflush(stdin);
		gets(nome[i][j]);
		printf("Altura: ");
		scanf("%f", &alt[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		maior=0;
		printf("\n\nDelegacao %s: \n",delega[i]);
		for(j=0;j<2;j++)
		{
			printf("%s\t",nome[i][j]);
		}
		printf("\n");
		for(j=0;j<2;j++)
		{
		if(alt[i][j]>maior)
			{
				maior=alt[i][j];
			}
			printf("%f\t", alt[i][j]);
		}
		printf("\nMaior Altura: %f", maior);
	}

	getch();
	
}
