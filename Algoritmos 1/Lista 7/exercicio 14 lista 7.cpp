#include<conio.h>
#include<stdio.h>
main()
{
	int i,n[6],contpar=0,contimpar=0;
	for(i=0;i<6;i++)
	{
		printf("Numero: ");
		scanf("%d", &n[i]);
		if(n[i]%2==0)
		{
			contpar++;
		}
		else
		{
			contimpar++;
		}
	}
	printf("\nNumeros Pares\n");
	for(i=0;i<6;i++)
	{
		if(n[i]%2==0)
		printf("%d\t", n[i]);
	}
	printf("\nNumeros Impares\n");
	for(i=0;i<6;i++)
	{
		if(n[i]%2!=0)
		printf("%d\t", n[i]);
	}
	getch();
}
