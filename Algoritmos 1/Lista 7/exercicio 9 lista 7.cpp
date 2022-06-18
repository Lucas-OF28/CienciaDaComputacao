#include<conio.h>
#include<stdio.h>
main()
{
	int A[5],i,j,aux;
	printf("Vetor A");
	for(i=0;i<5;i++)
	{
	printf("\nNumero: ");
	scanf("%d", &A[i]);
	}
	for(i=0;i<5;i++)
	{
	for(j=i+1;j<5;j++)
	{
	if(A[i] > A[j])
		{
		aux=A[i];
		A[i]=A[j];
		A[j]=aux;
		}
	}
	}
	for(i=0;i<5;i++)
	{
	printf("\nSequencia: %d\t", A[i]);
	}
	getch();
	
	
}
