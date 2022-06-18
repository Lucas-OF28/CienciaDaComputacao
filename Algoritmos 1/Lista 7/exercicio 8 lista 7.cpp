#include<conio.h>
#include<stdio.h>
main()
{
	int i,j, a[5], b[5], c[10];
	printf("Vetor A\n");
	for(i=0;i<5;i++)
	{
	printf("Numero: ");
	scanf("%d", &a[i]);
	c[i]=a[i];	
	}
	printf("\n\nVetor B\n");
	j=5;
	for(i=5;i<10;i++)
	{
	printf("Numero: ");
	scanf("%d", &b[i]);
	c[j]=b[i];
	j++;
	}
	printf("Vetor C\n");
	for(i=0;i<10;i++)
	{
	printf("%d\t",c[i]);
	
	}
	getch();
	
	
	

}
