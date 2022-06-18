#include<conio.h>
#include<stdio.h>
main()
{
	int n1, n2, soma;
	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	soma=n1+n2;
	if (soma>10)
	{
	printf("%d",soma);	
	}
	getch();
	
	
}
