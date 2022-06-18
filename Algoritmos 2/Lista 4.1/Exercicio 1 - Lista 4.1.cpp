#include<stdio.h>
#include<stdlib.h>

void calcula(int *x, int *y);
main()
{
	int a=10, b=5;
	calcula(&a, &b);
	printf("Soma: %d\n", a);
	printf("Subtracao: %d\n", b);
	system("pause");
}

void calcula(int *x, int *y)
{
	int aux=*x;
	*x=aux+ *y;
	*y=aux-*y;
}
