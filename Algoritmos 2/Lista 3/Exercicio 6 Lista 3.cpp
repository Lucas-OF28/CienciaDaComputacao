#include<conio.h>
#include<stdio.h>

int multiplica (int a, int b)
{
	int mult;
	mult=a*b;
	return mult;
}
main()
{
	int n1, n2, mult;
	printf("Informe um numero: ");
	scanf("%d", &n1);
	printf("Informe um numero: ");
	scanf("%d", &n2);
	mult=multiplica(n1,n2);
	printf("A multiplicacao sera: %d", mult);
	getch();
}
