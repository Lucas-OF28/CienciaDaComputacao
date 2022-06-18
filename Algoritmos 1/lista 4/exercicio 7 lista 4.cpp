#include<conio.h>
#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &n3);
	
	if(n1<n2 && n1<n3)
	{
	
	printf("O menor numero sera: %d",n1);
	
	}
	else if (n2<n1 && n2<n3)
	{
	printf("O menor numero sera: %d",n2);
	}
	else 
	{
	printf("O menor numero sera: %d",n3);
	}
getch();


}
