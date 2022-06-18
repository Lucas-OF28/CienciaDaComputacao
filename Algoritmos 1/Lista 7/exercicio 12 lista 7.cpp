#include<conio.h>
#include<stdio.h>
main()
{
	int A[5], B[10],C[5],i,x,k=0;
	for(i=0;i<5;i++)
	{
	printf("Numero vetor A: ");
	scanf("%d", &A[i]);
	}
	for(i=0;i<10;i++)
	{
	printf("Numero vetor B: ");
	scanf("%d", &B[i]);
	}
	for(x=0;x<5;x++)
		{
		for(i=0;i<10;i++)
		{
			if(A[x]==B[i])
			{
			C[k]=A[x];
			k++;
			}
		}
		}
		printf("\nInterseccao\n");
		for(i=0;i<k;i++)
		{
		printf("%d\t",C[i]);
		}
		getch();
		}	
