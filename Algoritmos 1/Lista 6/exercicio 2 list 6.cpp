#include<conio.h>
#include<stdio.h>
main()
{
	int n,trip;
	printf("Informe um numero: ");
	scanf("%d", &n);
	while(n!=(-999))
	{
		trip=n*3;
		printf("Numero: %d\n", n);
		printf("Seu triplo sera: %d\n", trip);
		printf("Informe um numero: ");
		scanf("%d", &n);
	}
	getch();
	
}
