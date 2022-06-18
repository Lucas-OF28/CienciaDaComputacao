#include<conio.h>
#include<stdio.h>
main()
{
	int n, i,mult=1;
	printf("Informe um numero: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
	mult=mult*i;
	}
	printf("Seu fatorial sera: %d",mult);
	getch();
}
