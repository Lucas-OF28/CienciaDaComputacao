#include<conio.h>
#include<stdio.h>
main()
{
	int A[5], B[5],i, x;
	for(i=0;i<5;i++)
	{
	printf("Numero:");
	scanf("%d", &A[i]);
	}
	printf("\nVetor A\n");
	for(i=0;i<5;i++)
	{
	printf("%d\t", A[i]);
	}
	x=4;
	for(i=0;i<5;i++)
	{	
		B[i]=A[x];
		x--;
	}
	printf("\nVetor A Invertido\n");
	for(i=0;i<5;i++)
	{
	printf("%d\t",B[i]);
	}
	getch();
}
