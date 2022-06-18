#include<stdio.h>
#include<conio.h>
main()
{
	float n1,n2,x;
	printf("Informe um numero real: ");
	scanf("%f", &n1);
	printf("Informe o segundo numero real: ");
	scanf("%f", &n2);
	x=n1+n2+2*(n1-n2);
	printf("O valor de x sera: %f", x);
	getch();
	
}
