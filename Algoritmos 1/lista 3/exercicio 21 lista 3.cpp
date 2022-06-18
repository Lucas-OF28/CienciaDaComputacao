#include<stdio.h>
#include<conio.h>
main()
{
	int n1, n2, soma, sub, mul;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	soma=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	printf("Primeiro numero: %d\nSegundo numero: %d\nSua soma sera: %d\nSua subtracao sera: %d\nSua multiplicacao sera: %d", n1,n2,soma,sub,mul);
	getch();
}
