#include<conio.h>
#include<stdio.h>
main()
{
	int N[5],i;
	for(i=0;i<5;i++)
	{
	printf("Numero: ");
	scanf("%d", &N[i]);
	}
	printf("\nOrdem Normal\n");
	for(i=0;i<5;i++)
	{
	printf("%d\t",N[i]);
	}
	printf("\nOndem inversa\n");
	for(i=4;i>=0;i--)
	{
	printf("%d\t", N[i]);
	}
	getch();
	
}
