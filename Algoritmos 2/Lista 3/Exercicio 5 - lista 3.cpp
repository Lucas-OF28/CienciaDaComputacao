#include<conio.h>
#include<stdio.h>

void multiplica (int a, int b)
{
	int mult;
	mult=a*b;
	printf("A multiplicacao sera: %d", mult);
}
main()
{
	int n1, n2, mult;
	printf("Informe um numero: ");
	scanf("%d", &n1);
	printf("Informe um numero: ");
	scanf("%d", &n2);
	multiplica(n1,n2);
	getch();
}

