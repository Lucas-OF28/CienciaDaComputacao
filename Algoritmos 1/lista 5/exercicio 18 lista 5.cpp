#include<conio.h>
#include<stdio.h>
main()
{
	int	ant=0, atual=1, prox, i;
	for (i=1;i<=10;i++)
	{
		printf("%d\t", atual);
		prox=ant+atual;
		ant=atual;
		atual=prox;
	}
	getch();
	
}
