#include<conio.h>
#include<stdio.h>
main()
{
	int n,cont=0;
	printf("Informe um numero: ");
	scanf("%d", &n);
	while(n>=0)
	{
	cont++;
	printf("Numero: %d\n",n);
	printf("Informe um numero: ");
	scanf("%d", &n);
	}
	printf("Quantidade  de numeros: %d",cont);
	
	getch();
}
