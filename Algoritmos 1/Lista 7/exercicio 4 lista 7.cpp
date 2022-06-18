#include<conio.h>
#include<stdio.h>
main()
{
	int i,A[5],B[5],soma[5];
	for(i=0;i<5;i++)
	{
	printf("Numero vetor A: ");
	scanf("%d", &A[i]);
	}
	printf("\nVetor A\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t", A[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("\nNumero vetor B: ");
	scanf("%d", &B[i]);
	soma[i]=A[i]+B[i];
	}
	printf("\nVetor B\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t", B[i]);
	}
	printf("\nSoma\n");
	for(i=0;i<5;i++)
	{
	printf("%d\t", soma[i]);
	}
	getch();
	
}
