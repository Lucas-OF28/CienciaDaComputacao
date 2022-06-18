#include<conio.h>
#include<stdio.h>
main()
{
	int i,n[7];
	for(i=0;i<7;i++)
	{
		printf("Numero: ");
		scanf("%d", &n[i]);
	}
	printf("\nVetor N\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t", n[i]);
	}
	printf("\nMultiplos de 2\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t", n[i]*2);
	}
	printf("\nMultiplos de 3\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t", n[i]*3);
	}
	getch();
}
