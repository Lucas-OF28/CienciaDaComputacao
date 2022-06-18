#include<conio.h>
#include<stdio.h>
main()
{
	int i,j, est[2][2],pos=0;
	char planta[2][2][100];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Planta: ");
			fflush(stdin);
			gets(planta[i][j]);
			printf("Quantidade em estoque: ");
			scanf("%d", &est[i][j]);
		}
	}
	printf("\nEstoque\t\t\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%s\t\t",planta[i][j]);
		}
	}
	printf("\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t\t",est[i][j]);
		if(est[i][j]<15)
		{
			pos=i+1;
		}
		}		
	}
		if(est[i][j]<15)
	{
	printf("\nHora de reabastecer o estoque do item %d\n", pos);
	}
	getch();
}
