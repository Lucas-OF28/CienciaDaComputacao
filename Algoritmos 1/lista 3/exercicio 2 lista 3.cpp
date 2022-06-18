#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,n3,mult;
	printf("Informe o primeiro numero: ");
	scanf("%d",&n1);
	printf("Informe o segundo numero: ");
	scanf("%d",&n2);
	printf("Informe o terceiro numero: ");
	scanf("%d",&n3);
	mult=n1*n2*n3;
	printf("A multiplicacao dos tres numeros sera: %d", mult);
	getch();
}
