#include<conio.h>
#include<stdio.h>
main()
{
	int n1,n2;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1>n2)
	{
	
	printf("O numero maior sera: %d\nE o menor sera: %d", n1,n2);
	
	}
	else if (n2>n1)
	{
	printf("O numero maior sera: %d\nE o menor sera: %d", n2,n1);
	}
getch();

}
	
	
