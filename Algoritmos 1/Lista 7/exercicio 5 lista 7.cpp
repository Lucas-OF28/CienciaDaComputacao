#include<stdio.h>
#include<conio.h>
main()
{
	int A[5],i,T[5];
	for(i=0;i<5;i++)
	{
	printf("Numero: ");
	scanf("%d", &A[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("%d\t",A[i]);
	}
	printf("\nMultiplicado por 3\n");
	for(i=0;i<5;i++)
	{
	printf("%d\t",A[i]*3);
	}
	getch();
	
	
	
	
}
